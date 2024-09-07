#include <iostream>
#include "Vec3.hpp"
#include "Ray.hpp"
#include "HitRecord.hpp"

#pragma once

class IShape {
    public:
        IShape();
        virtual ~IShape();

        virtual bool hit(const Ray &ray, float t_min, float t_max, HitRecord &hitRecord) const = 0;
};

IShape::IShape() {}

IShape::~IShape() {}
