#include "Vec3.h"

// Init
struct Vec3f Vec3f_init(float x, float y, float z)
{
    struct Vec3f result;
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}

// Add
struct Vec3f Vec3f_add(struct Vec3f a, struct Vec3f b)
{
    struct Vec3f result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

// Sub
struct Vec3f Vec3f_sub(struct Vec3f a, struct Vec3f b)
{
    struct Vec3f result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

// Hadamard
struct Vec3f Vec3f_hadamard(struct Vec3f a, struct Vec3f b)
{
    struct Vec3f result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    result.z = a.z * b.z;
    return result;
}

// Mul
struct Vec3f Vec3f_mul(struct Vec3f a, float scalar)
{
    struct Vec3f result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    result.z = a.z * scalar;
    return result;
}

// Div
struct Vec3f Vec3f_div(struct Vec3f a, float scalar)
{
    struct Vec3f result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    result.z = a.z / scalar;
    return result;
}

// Length
float Vec3f_length(struct Vec3f a)
{
    return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

// Dot
float Vec3f_dot(struct Vec3f a, struct Vec3f b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

// Normalize
struct Vec3f Vec3f_normalize(struct Vec3f a)
{
    float length = Vec3f_length(a);
    return Vec3f_div(a, length);
}
