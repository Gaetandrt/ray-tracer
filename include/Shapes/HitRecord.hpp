#include "Vec3.hpp"
#include "Ray.hpp"

#pragma once

class HitRecord {
    public:
        Point3 p;
        Vec3 normal;
        float t;
        bool front_face;

        void set_face_normal(const Ray &ray, const Vec3 &outward_normal)
        {
            front_face = ray.getDirection().dot(outward_normal) < 0;

            normal = front_face ? outward_normal : -outward_normal;
        }
};