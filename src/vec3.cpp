#include "vec3.hpp"
#include <cmath>

Vec3::Vec3()
    : _x(0), _y(0), _z(0)
{
}

Vec3::Vec3(float x, float y, float z)
    : _x(x), _y(y), _z(z)
{
}

Vec3::~Vec3() {}

Vec3 Vec3::operator-() const
{
    return Vec3(-_x, -_y, -_z);
}

Vec3 Vec3::operator+(const Vec3 &other) const
{
    return Vec3(_x + other._x, _y + other._y, _z + other._z);
}

Vec3 Vec3::operator-(const Vec3 &other) const
{
    return Vec3(_x - other._x, _y - other._y, _z - other._z);
}

Vec3 Vec3::operator*(const Vec3 &other) const
{
    return Vec3(_x * other._x, _y * other._y, _z * other._z);
}

Vec3 Vec3::operator/(const Vec3 &other) const
{
    return Vec3(_x / other._x, _y / other._y, _z / other._z);
}

Vec3 Vec3::operator+(float scalar) const
{
    return Vec3(_x + scalar, _y + scalar, _z + scalar);
}

Vec3 Vec3::operator-(float scalar) const
{
    return Vec3(_x - scalar, _y - scalar, _z - scalar);
}

Vec3 Vec3::operator/(float scalar) const
{
    return Vec3(_x / scalar, _y / scalar, _z / scalar);
}

Vec3 Vec3::operator+=(const Vec3 &other)
{
    this->_x += other._x;
    this->_y += other._y;
    this->_z += other._z;
    return *this;
}

Vec3 Vec3::operator-=(const Vec3 &other)
{
    this->_x -= other._x;
    this->_y -= other._y;
    this->_z -= other._z;
    return *this;
}

Vec3 Vec3::operator*=(const Vec3 &other)
{
    this->_x *= other._x;
    this->_y *= other._y;
    this->_z *= other._z;
    return *this;
}

Vec3 Vec3::operator/=(const Vec3 &other)
{
    this->_x /= other._x;
    this->_y /= other._y;
    this->_z /= other._z;
    return *this;
}

Vec3 Vec3::operator+=(float scalar)
{
    this->_x += scalar;
    this->_y += scalar;
    this->_z += scalar;
    return *this;
}

Vec3 Vec3::operator-=(float scalar)
{
    this->_x -= scalar;
    this->_y -= scalar;
    this->_z -= scalar;
    return *this;
}

Vec3 Vec3::operator*=(float scalar)
{
    this->_x *= scalar;
    this->_y *= scalar;
    this->_z *= scalar;
    return *this;
}

Vec3 Vec3::operator/=(float scalar)
{
    this->_x /= scalar;
    this->_y /= scalar;
    this->_z /= scalar;
    return *this;
}

Vec3 Vec3::operator*(float scalar) const
{
    return Vec3(_x * scalar, _y * scalar, _z * scalar);
}

std::ostream &operator<<(std::ostream &os, const Vec3 &vec)
{
    os << "Vec3(" << vec._x << ", " << vec._y << ", " << vec._z << ")";
    return os;
}

void Vec3::normalize()
{
    float length = std::sqrt(this->_x * this->_x + this->_y * this->_y + this->_z * this->_z);

    if (length == 0)
        return;
    this->_x /= length;
    this->_y /= length;
    this->_z /= length;
}

float Vec3::getX() const
{
    return this->_x;
}

float Vec3::getY() const
{
    return this->_y;
}

float Vec3::getZ() const
{
    return this->_z;
}

float Vec3::dot(const Vec3 &other) const
{
    return this->_x * other._x + this->_y * other._y + this->_z * other._z;
}

Vec3 Vec3::cross(const Vec3 &other) const
{
    return Vec3(this->_y * other._z - this->_z * other._y, this->_z * other._x - this->_x * other._z, this->_x * other._y - this->_y * other._x);
}

float Vec3::length() const
{
    return std::sqrt(this->_x * this->_x + this->_y * this->_y + this->_z * this->_z);
}
