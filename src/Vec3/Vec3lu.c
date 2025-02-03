#include "Vec3.h"

// Init
struct Vec3lu Vec3lu_init(unsigned long x, unsigned long y, unsigned long z)
{
    struct Vec3lu result;
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}

// Add
struct Vec3lu Vec3lu_add(struct Vec3lu a, struct Vec3lu b)
{
    struct Vec3lu result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

// Sub
struct Vec3lu Vec3lu_sub(struct Vec3lu a, struct Vec3lu b)
{
    struct Vec3lu result;

    if (a.x < b.x)
    {
        fprintf(stderr, "Vec3lu_sub: a.x is smaller than b.x\n");
        exit(1);
    }
    if (a.y < b.y)
    {
        fprintf(stderr, "Vec3lu_sub: a.y is smaller than b.y\n");
        exit(1);
    }
    if (a.z < b.z)
    {
        fprintf(stderr, "Vec3lu_sub: a.z is smaller than b.z\n");
        exit(1);
    }

    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

// Hadamard
struct Vec3lu Vec3lu_hadamard(struct Vec3lu a, struct Vec3lu b)
{
    struct Vec3lu result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    result.z = a.z * b.z;
    return result;
}

// Mul
struct Vec3lu Vec3lu_mul(struct Vec3lu a, unsigned long scalar)
{
    struct Vec3lu result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    result.z = a.z * scalar;
    return result;
}

// Div
struct Vec3lu Vec3lu_div(struct Vec3lu a, unsigned long scalar)
{
    struct Vec3lu result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    result.z = a.z / scalar;
    return result;
}

// Length
unsigned long Vec3lu_length(struct Vec3lu a)
{
    return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

// Dot
unsigned long Vec3lu_dot(struct Vec3lu a, struct Vec3lu b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
