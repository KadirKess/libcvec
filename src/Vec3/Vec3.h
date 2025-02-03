#ifndef VEC_THREE_H
#define VEC_THREE_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Vectors defintion

#define DEFINE_VEC3_TYPE(TYPE, NAME)                                           \
    struct Vec3##NAME                                                          \
    {                                                                          \
        TYPE x;                                                                \
        TYPE y;                                                                \
        TYPE z;                                                                \
    };

DEFINE_VEC3_TYPE(int, i)
DEFINE_VEC3_TYPE(unsigned int, ui)
DEFINE_VEC3_TYPE(long, l)
DEFINE_VEC3_TYPE(unsigned long, lu)
DEFINE_VEC3_TYPE(float, f)
DEFINE_VEC3_TYPE(double, d)

// Functions

#define DEFINE_VEC3_FUNCTIONS(TYPE, NAME)                                      \
    struct Vec3##NAME Vec3##NAME##_init(TYPE x, TYPE y, TYPE z);               \
    struct Vec3##NAME Vec3##NAME##_add(struct Vec3##NAME a,                    \
                                       struct Vec3##NAME b);                   \
    struct Vec3##NAME Vec3##NAME##_sub(struct Vec3##NAME a,                    \
                                       struct Vec3##NAME b);                   \
    struct Vec3##NAME Vec3##NAME##_hadamard(struct Vec3##NAME a,               \
                                            struct Vec3##NAME b);              \
    struct Vec3##NAME Vec3##NAME##_mul(struct Vec3##NAME a, TYPE scalar);      \
    struct Vec3##NAME Vec3##NAME##_div(struct Vec3##NAME a, TYPE scalar);      \
    TYPE Vec3##NAME##_length(struct Vec3##NAME a);                             \
    TYPE Vec3##NAME##_dot(struct Vec3##NAME a, struct Vec3##NAME b);

DEFINE_VEC3_FUNCTIONS(int, i)
DEFINE_VEC3_FUNCTIONS(unsigned int, ui)
DEFINE_VEC3_FUNCTIONS(long, l)
DEFINE_VEC3_FUNCTIONS(unsigned long, lu)
DEFINE_VEC3_FUNCTIONS(float, f)
DEFINE_VEC3_FUNCTIONS(double, d)

// Normalize for float and double
struct Vec3f Vec3f_normalize(struct Vec3f a);
struct Vec3d Vec3d_normalize(struct Vec3d a);

#endif // VEC_THREE_H
