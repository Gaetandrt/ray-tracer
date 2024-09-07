#include <iostream>
#include "Vec3.hpp"

#pragma once

class Ray {
    private:
        Point3 _origin;
        Vec3 _direction;

    public:
        Ray();
        Ray(const Point3 &origin, const Vec3 &direction);
        ~Ray();

        Point3 getOrigin() const;
        Vec3 getDirection() const;
        Point3 at(float t) const;
};