#ifndef CAMERA_HPP
#define CAMERA_HPP
#include "ray.hpp"

class camera
{
public:
    vec3 lower_left_corner;
    vec3 horizontal;
    vec3 vertical;
    vec3 origin;

    camera()
    {
        lower_left_corner = vec3(-2, -1, -1);
        horizontal = vec3(4, 0, 0);
        vertical = vec3(0, 2, 0);
        origin = vec3(0, 0, 0);
    }

    ray get_ray(float u, float v) const
    {
        return ray(origin, lower_left_corner + u * horizontal + v * vertical - origin);
    }
};

#endif