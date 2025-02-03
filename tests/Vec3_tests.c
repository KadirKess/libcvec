#include "../build/Vec3.h"
#include "tests.h"

void test_Vec3i(void)
{
    struct Vec3i a = Vec3i_init(1, 2, 3);
    struct Vec3i b = Vec3i_init(4, 5, 6);

    struct Vec3i add = Vec3i_add(a, b);
    assert_test(add.x == 5 && add.y == 7 && add.z == 9, "Vec3i add");

    struct Vec3i sub = Vec3i_sub(a, b);
    assert_test(sub.x == -3 && sub.y == -3 && sub.z == -3, "Vec3i sub");

    struct Vec3i hadamard = Vec3i_hadamard(a, b);
    assert_test(hadamard.x == 4 && hadamard.y == 10 && hadamard.z == 18,
                "Vec3i hadamard");

    struct Vec3i mul = Vec3i_mul(a, 2);
    assert_test(mul.x == 2 && mul.y == 4 && mul.z == 6, "Vec3i mul");

    struct Vec3i div = Vec3i_div(a, 2);
    assert_test(div.x == 0 && div.y == 1 && div.z == 1, "Vec3i div");

    int length = Vec3i_length(a);
    assert_test(length == 3, "Vec3i length");

    int dot = Vec3i_dot(a, b);
    assert_test(dot == 32, "Vec3i dot");
}

void test_Vec3ui(void)
{
    struct Vec3ui a = Vec3ui_init(1U, 2U, 3U);
    struct Vec3ui b = Vec3ui_init(4U, 5U, 6U);

    struct Vec3ui add = Vec3ui_add(a, b);
    assert_test(add.x == 5U && add.y == 7U && add.z == 9U, "Vec3ui add");

    struct Vec3ui sub = Vec3ui_sub(b, a);
    assert_test(sub.x == 3U && sub.y == 3U && sub.z == 3U, "Vec3ui sub");

    struct Vec3ui hadamard = Vec3ui_hadamard(a, b);
    assert_test(hadamard.x == 4U && hadamard.y == 10U && hadamard.z == 18U,
                "Vec3ui hadamard");

    struct Vec3ui mul = Vec3ui_mul(a, 2U);
    assert_test(mul.x == 2U && mul.y == 4U && mul.z == 6U, "Vec3ui mul");

    struct Vec3ui div = Vec3ui_div(b, 2U);
    assert_test(div.x == 2U && div.y == 2U && div.z == 3U, "Vec3ui div");

    unsigned int length = Vec3ui_length(a);
    assert_test(length == 3U, "Vec3ui length");

    unsigned int dot = Vec3ui_dot(a, b);
    assert_test(dot == 32U, "Vec3ui dot");
}

void test_Vec3l(void)
{
    struct Vec3l a = Vec3l_init(1L, 2L, 3L);
    struct Vec3l b = Vec3l_init(4L, 5L, 6L);

    struct Vec3l add = Vec3l_add(a, b);
    assert_test(add.x == 5L && add.y == 7L && add.z == 9L, "Vec3l add");

    struct Vec3l sub = Vec3l_sub(a, b);
    assert_test(sub.x == -3L && sub.y == -3L && sub.z == -3L, "Vec3l sub");

    struct Vec3l hadamard = Vec3l_hadamard(a, b);
    assert_test(hadamard.x == 4L && hadamard.y == 10L && hadamard.z == 18L,
                "Vec3l hadamard");

    struct Vec3l mul = Vec3l_mul(a, 2L);
    assert_test(mul.x == 2L && mul.y == 4L && mul.z == 6L, "Vec3l mul");

    struct Vec3l div = Vec3l_div(a, 2L);
    assert_test(div.x == 0L && div.y == 1L && div.z == 1L, "Vec3l div");

    long length = Vec3l_length(a);
    assert_test(length == 3L, "Vec3l length");

    long dot = Vec3l_dot(a, b);
    assert_test(dot == 32L, "Vec3l dot");
}

void test_Vec3lu(void)
{
    struct Vec3lu a = Vec3lu_init(1UL, 2UL, 3UL);
    struct Vec3lu b = Vec3lu_init(4UL, 5UL, 6UL);

    struct Vec3lu add = Vec3lu_add(a, b);
    assert_test(add.x == 5UL && add.y == 7UL && add.z == 9UL, "Vec3lu add");

    struct Vec3lu sub = Vec3lu_sub(b, a);
    assert_test(sub.x == 3UL && sub.y == 3UL && sub.z == 3UL, "Vec3lu sub");

    struct Vec3lu hadamard = Vec3lu_hadamard(a, b);
    assert_test(hadamard.x == 4UL && hadamard.y == 10UL && hadamard.z == 18UL,
                "Vec3lu hadamard");

    struct Vec3lu mul = Vec3lu_mul(a, 2UL);
    assert_test(mul.x == 2UL && mul.y == 4UL && mul.z == 6UL, "Vec3lu mul");

    struct Vec3lu div = Vec3lu_div(b, 2UL);
    assert_test(div.x == 2UL && div.y == 2UL && div.z == 3UL, "Vec3lu div");

    unsigned long length = Vec3lu_length(a);
    assert_test(length == 3UL, "Vec3lu length");

    unsigned long dot = Vec3lu_dot(a, b);
    assert_test(dot == 32UL, "Vec3lu dot");
}

void test_Vec3f(void)
{
    struct Vec3f a = Vec3f_init(1.0f, 2.0f, 3.0f);
    struct Vec3f b = Vec3f_init(4.0f, 5.0f, 6.0f);

    struct Vec3f add = Vec3f_add(a, b);
    assert_test(fabsf(add.x - 5.0f) < 0.0001f && fabsf(add.y - 7.0f) < 0.0001f
                    && fabsf(add.z - 9.0f) < 0.0001f,
                "Vec3f add");

    struct Vec3f sub = Vec3f_sub(a, b);
    assert_test(fabsf(sub.x - (-3.0f)) < 0.0001f
                    && fabsf(sub.y - (-3.0f)) < 0.0001f
                    && fabsf(sub.z - (-3.0f)) < 0.0001f,
                "Vec3f sub");

    struct Vec3f hadamard = Vec3f_hadamard(a, b);
    assert_test(fabsf(hadamard.x - 4.0f) < 0.0001f
                    && fabsf(hadamard.y - 10.0f) < 0.0001f
                    && fabsf(hadamard.z - 18.0f) < 0.0001f,
                "Vec3f hadamard");

    struct Vec3f mul = Vec3f_mul(a, 2.0f);
    assert_test(fabsf(mul.x - 2.0f) < 0.0001f && fabsf(mul.y - 4.0f) < 0.0001f
                    && fabsf(mul.z - 6.0f) < 0.0001f,
                "Vec3f mul");

    struct Vec3f div = Vec3f_div(a, 2.0f);
    assert_test(fabsf(div.x - 0.5f) < 0.0001f && fabsf(div.y - 1.0f) < 0.0001f
                    && fabsf(div.z - 1.5f) < 0.0001f,
                "Vec3f div");

    float length = Vec3f_length(a);
    assert_test(fabsf(length - 3.741657f) < 0.0001f, "Vec3f length");

    float dot = Vec3f_dot(a, b);
    assert_test(fabsf(dot - 32.0f) < 0.0001f, "Vec3f dot");

    struct Vec3f norm = Vec3f_normalize(a);
    float normLength = Vec3f_length(norm);
    assert_test(fabsf(normLength - 1.0f) < 0.0001f, "Vec3f normalize");
}

void test_Vec3d(void)
{
    struct Vec3d a = Vec3d_init(1.0, 2.0, 3.0);
    struct Vec3d b = Vec3d_init(4.0, 5.0, 6.0);

    struct Vec3d add = Vec3d_add(a, b);
    assert_test(fabs(add.x - 5.0) < 0.000001 && fabs(add.y - 7.0) < 0.000001
                    && fabs(add.z - 9.0) < 0.000001,
                "Vec3d add");

    struct Vec3d sub = Vec3d_sub(a, b);
    assert_test(fabs(sub.x - (-3.0)) < 0.000001
                    && fabs(sub.y - (-3.0)) < 0.000001
                    && fabs(sub.z - (-3.0)) < 0.000001,
                "Vec3d sub");

    struct Vec3d hadamard = Vec3d_hadamard(a, b);
    assert_test(fabs(hadamard.x - 4.0) < 0.000001
                    && fabs(hadamard.y - 10.0) < 0.000001
                    && fabs(hadamard.z - 18.0) < 0.000001,
                "Vec3d hadamard");

    struct Vec3d mul = Vec3d_mul(a, 2.0);
    assert_test(fabs(mul.x - 2.0) < 0.000001 && fabs(mul.y - 4.0) < 0.000001
                    && fabs(mul.z - 6.0) < 0.000001,
                "Vec3d mul");

    struct Vec3d div = Vec3d_div(a, 2.0);
    assert_test(fabs(div.x - 0.5) < 0.000001 && fabs(div.y - 1.0) < 0.000001
                    && fabs(div.z - 1.5) < 0.000001,
                "Vec3d div");

    double length = Vec3d_length(a);
    assert_test(fabs(length - 3.7416573867739413) < 0.000001, "Vec3d length");

    double dot = Vec3d_dot(a, b);
    assert_test(fabs(dot - 32.0) < 0.000001, "Vec3d dot");

    struct Vec3d norm = Vec3d_normalize(a);
    double normLength = Vec3d_length(norm);
    assert_test(fabs(normLength - 1.0) < 0.000001, "Vec3d normalize");
}
