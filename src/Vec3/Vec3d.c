#include "Vec3.h"

// Init
struct Vec3d Vec3d_init(double x, double y, double z)
{
    struct Vec3d result;
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}

// Add
struct Vec3d Vec3d_add(struct Vec3d a, struct Vec3d b)
{
    struct Vec3d result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

// Sub
struct Vec3d Vec3d_sub(struct Vec3d a, struct Vec3d b)
{
    struct Vec3d result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

// Hadamard
struct Vec3d Vec3d_hadamard(struct Vec3d a, struct Vec3d b)
{
    struct Vec3d result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    result.z = a.z * b.z;
    return result;
}

// Mul
struct Vec3d Vec3d_mul(struct Vec3d a, double scalar)
{
    struct Vec3d result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    result.z = a.z * scalar;
    return result;
}

// Div
struct Vec3d Vec3d_div(struct Vec3d a, double scalar)
{
    struct Vec3d result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    result.z = a.z / scalar;
    return result;
}

// Length
double Vec3d_length(struct Vec3d a)
{
    return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

// Dot
double Vec3d_dot(struct Vec3d a, struct Vec3d b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

// Normalize
struct Vec3d Vec3d_normalize(struct Vec3d a)
{
    double length = Vec3d_length(a);
    return Vec3d_div(a, length);
}
