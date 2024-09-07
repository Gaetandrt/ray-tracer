#include "Camera.hpp"
#include <cmath>

Camera::Camera()
    : _origin(0, 0, 0), _fov(90), _aspect_ratio(16.0f / 9.0f), _look_at(0, 0, -1), _up(0, 1, 0), _focal_length(1.0f)
{
    auto fov_radians = _fov * M_PI / 180.0f;
    _viewport_height = 2.0f * tan(fov_radians / 2.0f);
    _viewport_width = _aspect_ratio * _viewport_height;
    _direction = (_look_at - _origin);
    _direction.normalize();
    _horizontal = _up.cross(_direction);
    _horizontal.normalize();
    _vertical = _direction.cross(_horizontal);
    _vertical.normalize();
}

Camera::~Camera()
{
}

Point3 Camera::getOrigin() const
{
    return _origin;
}

Vec3 Camera::getDirection() const
{
    return _direction;
}

Vec3 Camera::getUp() const
{
    return _up;
}

Vec3 Camera::getHorizontal() const
{
    return _horizontal;
}

Vec3 Camera::getVertical() const
{
    return _vertical;
}

Vec3 Camera::getLookAt() const
{
    return _look_at;
}

float Camera::getFov() const
{
    return _fov;
}

float Camera::getAspectRatio() const
{
    return _aspect_ratio;
}

float Camera::getViewportHeight() const
{
    return _viewport_height;
}

float Camera::getViewportWidth() const
{
    return _viewport_width;
}

float Camera::getFocalLength() const
{
    return _focal_length;
}

Vec3 Camera::getHorizontal() const
{
    return _horizontal;
}

Vec3 Camera::getVertical() const
{
    return _vertical;
}