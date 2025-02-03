#include "../build/Vec2.h"
#include "tests.h"

void test_Vec2i(void)
{
    struct Vec2i a = Vec2i_init(1, 2);
    struct Vec2i b = Vec2i_init(3, 4);

    struct Vec2i add = Vec2i_add(a, b);
    assert_test(add.x == 4 && add.y == 6, "Vec2i add");

    struct Vec2i sub = Vec2i_sub(a, b);
    assert_test(sub.x == -2 && sub.y == -2, "Vec2i sub");

    struct Vec2i hadamard = Vec2i_hadamard(a, b);
    assert_test(hadamard.x == 3 && hadamard.y == 8, "Vec2i hadamard");

    struct Vec2i mul = Vec2i_mul(a, 2);
    assert_test(mul.x == 2 && mul.y == 4, "Vec2i mul");

    struct Vec2i div = Vec2i_div(a, 2);
    assert_test(div.x == 0 && div.y == 1, "Vec2i div");

    int length = Vec2i_length(a);
    assert_test(length == 2, "Vec2i length");

    int dot = Vec2i_dot(a, b);
    assert_test(dot == 11, "Vec2i dot");
}

void test_Vec2ui(void)
{
    struct Vec2ui a = Vec2ui_init(1, 2);
    struct Vec2ui b = Vec2ui_init(3, 4);

    struct Vec2ui add = Vec2ui_add(a, b);
    assert_test(add.x == 4 && add.y == 6, "Vec2ui add");

    struct Vec2ui sub = Vec2ui_sub(b, a);
    assert_test(sub.x == 2 && sub.y == 2, "Vec2ui sub");

    struct Vec2ui hadamard = Vec2ui_hadamard(a, b);
    assert_test(hadamard.x == 3 && hadamard.y == 8, "Vec2ui hadamard");

    struct Vec2ui mul = Vec2ui_mul(a, 2);
    assert_test(mul.x == 2 && mul.y == 4, "Vec2ui mul");

    struct Vec2ui div = Vec2ui_div(b, 2);
    assert_test(div.x == 1 && div.y == 2, "Vec2ui div");

    unsigned int length = Vec2ui_length(a);
    assert_test(length == 2, "Vec2ui length");

    unsigned int dot = Vec2ui_dot(a, b);
    assert_test(dot == 11, "Vec2ui dot");
}

void test_Vec2l(void)
{
    struct Vec2l a = Vec2l_init(1L, 2L);
    struct Vec2l b = Vec2l_init(3L, 4L);

    struct Vec2l add = Vec2l_add(a, b);
    assert_test(add.x == 4L && add.y == 6L, "Vec2l add");

    struct Vec2l sub = Vec2l_sub(a, b);
    assert_test(sub.x == -2L && sub.y == -2L, "Vec2l sub");

    struct Vec2l hadamard = Vec2l_hadamard(a, b);
    assert_test(hadamard.x == 3L && hadamard.y == 8L, "Vec2l hadamard");

    struct Vec2l mul = Vec2l_mul(a, 2L);
    assert_test(mul.x == 2L && mul.y == 4L, "Vec2l mul");

    struct Vec2l div = Vec2l_div(a, 2L);
    assert_test(div.x == 0L && div.y == 1L, "Vec2l div");

    long length = Vec2l_length(a);
    assert_test(length == 2L, "Vec2l length");

    long dot = Vec2l_dot(a, b);
    assert_test(dot == 11L, "Vec2l dot");
}

void test_Vec2lu(void)
{
    struct Vec2lu a = Vec2lu_init(1UL, 2UL);
    struct Vec2lu b = Vec2lu_init(3UL, 4UL);

    struct Vec2lu add = Vec2lu_add(a, b);
    assert_test(add.x == 4UL && add.y == 6UL, "Vec2lu add");

    struct Vec2lu sub = Vec2lu_sub(b, a);
    assert_test(sub.x == 2UL && sub.y == 2UL, "Vec2lu sub");

    struct Vec2lu hadamard = Vec2lu_hadamard(a, b);
    assert_test(hadamard.x == 3UL && hadamard.y == 8UL, "Vec2lu hadamard");

    struct Vec2lu mul = Vec2lu_mul(a, 2UL);
    assert_test(mul.x == 2UL && mul.y == 4UL, "Vec2lu mul");

    struct Vec2lu div = Vec2lu_div(b, 2UL);
    assert_test(div.x == 1UL && div.y == 2UL, "Vec2lu div");

    unsigned long length = Vec2lu_length(a);
    assert_test(length == 2UL, "Vec2lu length");

    unsigned long dot = Vec2lu_dot(a, b);
    assert_test(dot == 11UL, "Vec2lu dot");
}

void test_Vec2f(void)
{
    struct Vec2f a = Vec2f_init(1.0f, 2.0f);
    struct Vec2f b = Vec2f_init(3.0f, 4.0f);

    struct Vec2f add = Vec2f_add(a, b);
    assert_test(fabsf(add.x - 4.0f) < 0.0001f && fabsf(add.y - 6.0f) < 0.0001f,
                "Vec2f add");

    struct Vec2f sub = Vec2f_sub(a, b);
    assert_test(fabsf(sub.x - (-2.0f)) < 0.0001f
                    && fabsf(sub.y - (-2.0f)) < 0.0001f,
                "Vec2f sub");

    struct Vec2f hadamard = Vec2f_hadamard(a, b);
    assert_test(fabsf(hadamard.x - 3.0f) < 0.0001f
                    && fabsf(hadamard.y - 8.0f) < 0.0001f,
                "Vec2f hadamard");

    struct Vec2f mul = Vec2f_mul(a, 2.0f);
    assert_test(fabsf(mul.x - 2.0f) < 0.0001f && fabsf(mul.y - 4.0f) < 0.0001f,
                "Vec2f mul");

    struct Vec2f div = Vec2f_div(a, 2.0f);
    assert_test(fabsf(div.x - 0.5f) < 0.0001f && fabsf(div.y - 1.0f) < 0.0001f,
                "Vec2f div");

    float length = Vec2f_length(a);
    assert_test(fabsf(length - 2.23607f) < 0.0001f, "Vec2f length");

    float dot = Vec2f_dot(a, b);
    assert_test(fabsf(dot - 11.0f) < 0.0001f, "Vec2f dot");

    struct Vec2f norm = Vec2f_normalize(a);
    float normLength = Vec2f_length(norm);
    assert_test(fabsf(normLength - 1.0f) < 0.0001f, "Vec2f normalize");
}

void test_Vec2d(void)
{
    struct Vec2d a = Vec2d_init(1.0, 2.0);
    struct Vec2d b = Vec2d_init(3.0, 4.0);

    struct Vec2d add = Vec2d_add(a, b);
    assert_test(fabs(add.x - 4.0) < 0.000001 && fabs(add.y - 6.0) < 0.000001,
                "Vec2d add");

    struct Vec2d sub = Vec2d_sub(a, b);
    assert_test(fabs(sub.x - (-2.0)) < 0.000001
                    && fabs(sub.y - (-2.0)) < 0.000001,
                "Vec2d sub");

    struct Vec2d hadamard = Vec2d_hadamard(a, b);
    assert_test(fabs(hadamard.x - 3.0) < 0.000001
                    && fabs(hadamard.y - 8.0) < 0.000001,
                "Vec2d hadamard");

    struct Vec2d mul = Vec2d_mul(a, 2.0);
    assert_test(fabs(mul.x - 2.0) < 0.000001 && fabs(mul.y - 4.0) < 0.000001,
                "Vec2d mul");

    struct Vec2d div = Vec2d_div(a, 2.0);
    assert_test(fabs(div.x - 0.5) < 0.000001 && fabs(div.y - 1.0) < 0.000001,
                "Vec2d div");

    double length = Vec2d_length(a);
    assert_test(fabs(length - 2.23606797749979) < 0.000001, "Vec2d length");

    double dot = Vec2d_dot(a, b);
    assert_test(fabs(dot - 11.0) < 0.000001, "Vec2d dot");

    struct Vec2d norm = Vec2d_normalize(a);
    double normLength = Vec2d_length(norm);
    assert_test(fabs(normLength - 1.0) < 0.000001, "Vec2d normalize");
}
