#ifndef TESTS_H
#define TESTS_H

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define assert_test(condition, message)                                        \
    if (!(condition))                                                          \
    {                                                                          \
        fprintf(stderr, "%s test failed\n", message);                          \
        exit(1);                                                               \
    }

void test_Vec2i(void);
void test_Vec2ui(void);
void test_Vec2l(void);
void test_Vec2lu(void);
void test_Vec2f(void);
void test_Vec2d(void);

void test_Vec3i(void);
void test_Vec3ui(void);
void test_Vec3l(void);
void test_Vec3lu(void);
void test_Vec3f(void);
void test_Vec3d(void);

#endif // TESTS_H
