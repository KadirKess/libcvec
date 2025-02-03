#include "Vec3.h"

// Init
struct Vec3ui Vec3ui_init(unsigned int x, unsigned int y, unsigned int z)
{
    struct Vec3ui result;
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}

// Add
struct Vec3ui Vec3ui_add(struct Vec3ui a, struct Vec3ui b)
{
    struct Vec3ui result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

// Sub
struct Vec3ui Vec3ui_sub(struct Vec3ui a, struct Vec3ui b)
{
    struct Vec3ui result;

    if (a.x < b.x)
    {
        fprintf(stderr, "Vec3ui_sub: a.x is smaller than b.x\n");
        exit(1);
    }
    if (a.y < b.y)
    {
        fprintf(stderr, "Vec3ui_sub: a.y is smaller than b.y\n");
        exit(1);
    }
    if (a.z < b.z)
    {
        fprintf(stderr, "Vec3ui_sub: a.z is smaller than b.z\n");
        exit(1);
    }

    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

// Hadamard
struct Vec3ui Vec3ui_hadamard(struct Vec3ui a, struct Vec3ui b)
{
    struct Vec3ui result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    result.z = a.z * b.z;
    return result;
}

// Mul
struct Vec3ui Vec3ui_mul(struct Vec3ui a, unsigned int scalar)
{
    struct Vec3ui result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    result.z = a.z * scalar;
    return result;
}

// Div
struct Vec3ui Vec3ui_div(struct Vec3ui a, unsigned int scalar)
{
    struct Vec3ui result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    result.z = a.z / scalar;
    return result;
}

// Length
unsigned int Vec3ui_length(struct Vec3ui a)
{
    return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

// Dot
unsigned int Vec3ui_dot(struct Vec3ui a, struct Vec3ui b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
