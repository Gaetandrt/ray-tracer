#include "Sphere.hpp"

Sphere::Sphere(Point3 center, float radius)
    : _center(center), _radius(radius)
{
}

Sphere::~Sphere() {}

bool Sphere::hit(const Ray &ray, float t_min, float t_max, HitRecord &hitRecord) const
{
    Vec3 oc = ray.getOrigin() - _center;
    float a = ray.getDirection().dot(ray.getDirection());
    float half_b = oc.dot(ray.getDirection());
    float c = oc.dot(oc) - _radius * _radius;

    float discriminant = (half_b * half_b) - (a * c);

    if (discriminant < 0)
        return false;

    float t1 = (-half_b - sqrt(discriminant)) / a;
    float t2 = (-half_b + sqrt(discriminant)) / a;

    if (t1 > t_min && t1 < t_max) {
        hitRecord.t = t1;
    } else if (t2 > t_min && t2 < t_max) {
        hitRecord.t = t2;
    } else {
        return false;
    }

    hitRecord.p = ray.at(hitRecord.t);
    Vec3 outwardNormal = (hitRecord.p - _center) / _radius;
    hitRecord.set_face_normal(ray, outwardNormal);

    return true;
}