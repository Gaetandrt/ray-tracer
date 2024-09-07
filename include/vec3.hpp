#include <iostream>

#pragma once

class Vec3 {
    private:
        float _x, _y, _z;

    public:
        Vec3();
        Vec3(float x, float y, float z);
        ~Vec3();

        Vec3 operator+(const Vec3 &other) const;
        Vec3 operator-(const Vec3 &other) const;
        Vec3 operator*(const Vec3 &other) const;
        Vec3 operator/(const Vec3 &other) const;

        Vec3 operator+=(const Vec3 &other);
        Vec3 operator-=(const Vec3 &other);
        Vec3 operator*=(const Vec3 &other);
        Vec3 operator/=(const Vec3 &other);

        Vec3 operator+(float scalar) const;
        Vec3 operator-(float scalar) const;
        Vec3 operator*(float scalar) const;
        Vec3 operator/(float scalar) const;

        Vec3 operator+=(float scalar);
        Vec3 operator-=(float scalar);
        Vec3 operator*=(float scalar);
        Vec3 operator/=(float scalar);

        friend std::ostream &operator<<(std::ostream &os, const Vec3 &vec);

        void normalize();
        float dot(const Vec3 &other) const;
        Vec3 cross(const Vec3 &other) const;
        float length() const;

        float getX() const;
        float getY() const;
        float getZ() const;
};

using Point3 = Vec3;
using Color = Vec3;
