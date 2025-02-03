#include <math.h>
#include <stdio.h>

#include "Vec2.h"

// Init
struct Vec2lu Vec2lu_init(unsigned long x, unsigned long y)
{
    struct Vec2lu result;
    result.x = x;
    result.y = y;
    return result;
}

// Add
struct Vec2lu Vec2lu_add(struct Vec2lu a, struct Vec2lu b)
{
    struct Vec2lu result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

// Sub
struct Vec2lu Vec2lu_sub(struct Vec2lu a, struct Vec2lu b)
{
    struct Vec2lu result;

    if (a.x < b.x)
    {
        fprintf(stderr, "Vec2lu_sub: a.x is smaller than b.x\n");
        exit(1);
    }
    if (a.y < b.y)
    {
        fprintf(stderr, "Vec2lu_sub: a.y is smaller than b.y\n");
        exit(1);
    }

    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

// Hadamard
struct Vec2lu Vec2lu_hadamard(struct Vec2lu a, struct Vec2lu b)
{
    struct Vec2lu result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    return result;
}

// Mul
struct Vec2lu Vec2lu_mul(struct Vec2lu a, unsigned long scalar)
{
    struct Vec2lu result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    return result;
}

// Div
struct Vec2lu Vec2lu_div(struct Vec2lu a, unsigned long scalar)
{
    struct Vec2lu result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    return result;
}

// Length
unsigned long Vec2lu_length(struct Vec2lu a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

// Dot
unsigned long Vec2lu_dot(struct Vec2lu a, struct Vec2lu b)
{
    return a.x * b.x + a.y * b.y;
}
