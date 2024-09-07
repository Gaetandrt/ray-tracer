#include "Vec3.hpp"

#pragma once

class Camera {
    private:
        Point3 _origin;
        float _fov;
        float _aspect_ratio;
        float _viewport_height;
        float _viewport_width;
        float _focal_length;
        Vec3 _look_at;
        Vec3 _direction;
        Vec3 _up;
        Vec3 _horizontal;
        Vec3 _vertical;

    public:
        Camera();
        ~Camera();

        Point3 getOrigin() const;
        Vec3 getDirection() const;
        Vec3 getUp() const;
        Vec3 getHorizontal() const;
        Vec3 getVertical() const;
        Vec3 getLookAt() const;
        float getFov() const;
        float getAspectRatio() const;
        float getViewportHeight() const;
        float getViewportWidth() const;
        float getFocalLength() const;
        Vec3 getHorizontal() const;
        Vec3 getVertical() const;
};