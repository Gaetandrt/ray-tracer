#include "Ray.hpp"
#include "Vec3.hpp"
#include <cmath>

Ray::Ray()
    : _origin(0, 0, 0), _direction(0, 0, 0)
{
}

Ray::Ray(const Point3 &origin, const Vec3 &direction)
    : _origin(origin), _direction(direction)
{
}

Ray::~Ray()
{
}

Point3 Ray::getOrigin() const
{
    return _origin;
}

Vec3 Ray::getDirection() const
{
    return _direction;
}

Point3 Ray::at(float t) const
{
    return (_origin + t) * _direction;
}
