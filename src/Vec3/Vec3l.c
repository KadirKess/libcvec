#include "Vec3.h"

// Init
struct Vec3l Vec3l_init(long x, long y, long z)
{
    struct Vec3l result;
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}

// Add
struct Vec3l Vec3l_add(struct Vec3l a, struct Vec3l b)
{
    struct Vec3l result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

// Sub
struct Vec3l Vec3l_sub(struct Vec3l a, struct Vec3l b)
{
    struct Vec3l result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

// Hadamard
struct Vec3l Vec3l_hadamard(struct Vec3l a, struct Vec3l b)
{
    struct Vec3l result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    result.z = a.z * b.z;
    return result;
}

// Mul
struct Vec3l Vec3l_mul(struct Vec3l a, long scalar)
{
    struct Vec3l result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    result.z = a.z * scalar;
    return result;
}

// Div
struct Vec3l Vec3l_div(struct Vec3l a, long scalar)
{
    struct Vec3l result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    result.z = a.z / scalar;
    return result;
}

// Length
long Vec3l_length(struct Vec3l a)
{
    return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

// Dot
long Vec3l_dot(struct Vec3l a, struct Vec3l b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
