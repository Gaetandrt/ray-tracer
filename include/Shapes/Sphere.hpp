#include <iostream>
#include "Vec3.hpp"
#include "Ray.hpp"
#include "HitRecord.hpp"
#include "IShape.hpp"
#pragma once

class Sphere : public IShape {
    private:
        Point3 _center;
        float _radius;

    public:
        Sphere(Point3 center, float radius);
        ~Sphere();

        bool hit(const Ray &ray, float t_min, float t_max, HitRecord &hitRecord) const override;
};
