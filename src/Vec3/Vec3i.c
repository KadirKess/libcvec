#include "Vec3.h"

// Init
struct Vec3i Vec3i_init(int x, int y, int z)
{
    struct Vec3i result;
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}

// Add
struct Vec3i Vec3i_add(struct Vec3i a, struct Vec3i b)
{
    struct Vec3i result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

// Sub
struct Vec3i Vec3i_sub(struct Vec3i a, struct Vec3i b)
{
    struct Vec3i result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

// Hadamard
struct Vec3i Vec3i_hadamard(struct Vec3i a, struct Vec3i b)
{
    struct Vec3i result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    result.z = a.z * b.z;
    return result;
}

// Mul
struct Vec3i Vec3i_mul(struct Vec3i a, int scalar)
{
    struct Vec3i result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    result.z = a.z * scalar;
    return result;
}

// Div
struct Vec3i Vec3i_div(struct Vec3i a, int scalar)
{
    struct Vec3i result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    result.z = a.z / scalar;
    return result;
}

// Length
int Vec3i_length(struct Vec3i a)
{
    return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

// Dot
int Vec3i_dot(struct Vec3i a, struct Vec3i b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
