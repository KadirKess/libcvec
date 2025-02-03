#include <math.h>
#include <stdio.h>

#include "Vec2.h"

// Init
struct Vec2ui Vec2ui_init(unsigned int x, unsigned int y)
{
    struct Vec2ui result;
    result.x = x;
    result.y = y;
    return result;
}

// Add
struct Vec2ui Vec2ui_add(struct Vec2ui a, struct Vec2ui b)
{
    struct Vec2ui result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

// Sub
struct Vec2ui Vec2ui_sub(struct Vec2ui a, struct Vec2ui b)
{
    struct Vec2ui result;

    if (a.x < b.x)
    {
        fprintf(stderr, "Vec2ui_sub: a.x is smaller than b.x\n");
        exit(1);
    }
    if (a.y < b.y)
    {
        fprintf(stderr, "Vec2ui_sub: a.y is smaller than b.y\n");
        exit(1);
    }

    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

// Hadamard
struct Vec2ui Vec2ui_hadamard(struct Vec2ui a, struct Vec2ui b)
{
    struct Vec2ui result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    return result;
}

// Mul
struct Vec2ui Vec2ui_mul(struct Vec2ui a, unsigned int scalar)
{
    struct Vec2ui result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    return result;
}

// Div
struct Vec2ui Vec2ui_div(struct Vec2ui a, unsigned int scalar)
{
    struct Vec2ui result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    return result;
}

// Length
unsigned int Vec2ui_length(struct Vec2ui a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

// Dot
unsigned int Vec2ui_dot(struct Vec2ui a, struct Vec2ui b)
{
    return a.x * b.x + a.y * b.y;
}
