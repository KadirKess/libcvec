#include <math.h>

#include "Vec2.h"

// Init
struct Vec2f Vec2f_init(float x, float y)
{
    struct Vec2f result;
    result.x = x;
    result.y = y;
    return result;
}

// Add
struct Vec2f Vec2f_add(struct Vec2f a, struct Vec2f b)
{
    struct Vec2f result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

// Sub
struct Vec2f Vec2f_sub(struct Vec2f a, struct Vec2f b)
{
    struct Vec2f result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

// Hadamard
struct Vec2f Vec2f_hadamard(struct Vec2f a, struct Vec2f b)
{
    struct Vec2f result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    return result;
}

// Mul
struct Vec2f Vec2f_mul(struct Vec2f a, float scalar)
{
    struct Vec2f result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    return result;
}

// Div
struct Vec2f Vec2f_div(struct Vec2f a, float scalar)
{
    struct Vec2f result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    return result;
}

// Length
float Vec2f_length(struct Vec2f a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

// Dot
float Vec2f_dot(struct Vec2f a, struct Vec2f b)
{
    return a.x * b.x + a.y * b.y;
}

// Normalize
struct Vec2f Vec2f_normalize(struct Vec2f a)
{
    float length = Vec2f_length(a);
    return Vec2f_div(a, length);
}
