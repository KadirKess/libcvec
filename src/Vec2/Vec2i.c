#include <math.h>

#include "Vec2.h"

// Init
struct Vec2i Vec2i_init(int x, int y)
{
    struct Vec2i result;
    result.x = x;
    result.y = y;
    return result;
}

// Add
struct Vec2i Vec2i_add(struct Vec2i a, struct Vec2i b)
{
    struct Vec2i result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

// Sub
struct Vec2i Vec2i_sub(struct Vec2i a, struct Vec2i b)
{
    struct Vec2i result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result;
}

// Hadamard
struct Vec2i Vec2i_hadamard(struct Vec2i a, struct Vec2i b)
{
    struct Vec2i result;
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    return result;
}

// Mul
struct Vec2i Vec2i_mul(struct Vec2i a, int scalar)
{
    struct Vec2i result;
    result.x = a.x * scalar;
    result.y = a.y * scalar;
    return result;
}

// Div
struct Vec2i Vec2i_div(struct Vec2i a, int scalar)
{
    struct Vec2i result;
    result.x = a.x / scalar;
    result.y = a.y / scalar;
    return result;
}

// Length
int Vec2i_length(struct Vec2i a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

// Dot
int Vec2i_dot(struct Vec2i a, struct Vec2i b)
{
    return a.x * b.x + a.y * b.y;
}
