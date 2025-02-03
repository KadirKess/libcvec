#ifndef VEC_TWO_H
#define VEC_TWO_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Vectors defintion

#define DEFINE_VEC2_TYPE(TYPE, NAME)                                           \
    struct Vec2##NAME                                                          \
    {                                                                          \
        TYPE x;                                                                \
        TYPE y;                                                                \
    };

DEFINE_VEC2_TYPE(int, i)
DEFINE_VEC2_TYPE(unsigned int, ui)
DEFINE_VEC2_TYPE(long, l)
DEFINE_VEC2_TYPE(unsigned long, lu)
DEFINE_VEC2_TYPE(float, f)
DEFINE_VEC2_TYPE(double, d)

// Functions

#define DEFINE_VEC2_FUNCTIONS(TYPE, NAME)                                      \
    struct Vec2##NAME Vec2##NAME##_init(TYPE x, TYPE y);                       \
    struct Vec2##NAME Vec2##NAME##_add(struct Vec2##NAME a,                    \
                                       struct Vec2##NAME b);                   \
    struct Vec2##NAME Vec2##NAME##_sub(struct Vec2##NAME a,                    \
                                       struct Vec2##NAME b);                   \
    struct Vec2##NAME Vec2##NAME##_hadamard(struct Vec2##NAME a,               \
                                            struct Vec2##NAME b);              \
    struct Vec2##NAME Vec2##NAME##_mul(struct Vec2##NAME a, TYPE scalar);      \
    struct Vec2##NAME Vec2##NAME##_div(struct Vec2##NAME a, TYPE scalar);      \
    TYPE Vec2##NAME##_length(struct Vec2##NAME a);                             \
    TYPE Vec2##NAME##_dot(struct Vec2##NAME a, struct Vec2##NAME b);

DEFINE_VEC2_FUNCTIONS(int, i)
DEFINE_VEC2_FUNCTIONS(unsigned int, ui)
DEFINE_VEC2_FUNCTIONS(long, l)
DEFINE_VEC2_FUNCTIONS(unsigned long, lu)
DEFINE_VEC2_FUNCTIONS(float, f)
DEFINE_VEC2_FUNCTIONS(double, d)

// Normalize for float and double
struct Vec2f Vec2f_normalize(struct Vec2f a);
struct Vec2d Vec2d_normalize(struct Vec2d a);

#endif // VEC_TWO_H
