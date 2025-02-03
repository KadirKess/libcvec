#include <math.h>

#include "Vec2.h"

// Init
struct Vec2d Vec2d_init(double x, double y)
{
    struct Vec2d result;
    result.x = x;
    result.y = y;
    return result;
}

// Add
struct Vec2d Vec2d_add(struct Vec2d a, struct Vec2d b)
{
    struct Vec2d result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

// Sub
struct Vec2d Vec2d_sub(struct Vec2d a, struct Vec2d b)
{
    struct Vec2d result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

// Hadamard
struct Vec2d Vec2d_hadamard(struct Vec2d a, struct Vec2d b)
{
    struct Vec2d result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    return result;
}

// Mul
struct Vec2d Vec2d_mul(struct Vec2d a, double scalar)
{
    struct Vec2d result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    return result;
}

// Div
struct Vec2d Vec2d_div(struct Vec2d a, double scalar)
{
    struct Vec2d result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    return result;
}

// Length
double Vec2d_length(struct Vec2d a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

// Dot
double Vec2d_dot(struct Vec2d a, struct Vec2d b)
{
    return a.x * b.x + a.y * b.y;
}

// Normalize
struct Vec2d Vec2d_normalize(struct Vec2d a)
{
    double length = Vec2d_length(a);
    return Vec2d_div(a, length);
}
