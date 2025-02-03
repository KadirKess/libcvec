#include <math.h>

#include "Vec2.h"

// Init
struct Vec2l Vec2l_init(long x, long y)
{
    struct Vec2l result;
    result.x = x;
    result.y = y;
    return result;
}

// Add
struct Vec2l Vec2l_add(struct Vec2l a, struct Vec2l b)
{
    struct Vec2l result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

// Sub
struct Vec2l Vec2l_sub(struct Vec2l a, struct Vec2l b)
{
    struct Vec2l result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

// Hadamard
struct Vec2l Vec2l_hadamard(struct Vec2l a, struct Vec2l b)
{
    struct Vec2l result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    return result;
}

// Mul
struct Vec2l Vec2l_mul(struct Vec2l a, long scalar)
{
    struct Vec2l result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    return result;
}

// Div
struct Vec2l Vec2l_div(struct Vec2l a, long scalar)
{
    struct Vec2l result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    return result;
}

// Length
long Vec2l_length(struct Vec2l a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

// Dot
long Vec2l_dot(struct Vec2l a, struct Vec2l b)
{
    return a.x * b.x + a.y * b.y;
}
