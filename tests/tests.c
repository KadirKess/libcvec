#include "tests.h"

int main(void)
{
    printf("------------------\n");
    printf("Running tests...\n");
    printf("------------------\n");

    printf("Testing Vec2...\n");
    printf("------------------\n");

    test_Vec2i();
    test_Vec2ui();
    test_Vec2l();
    test_Vec2lu();
    test_Vec2f();
    test_Vec2d();

    printf("Testing Vec3...\n");
    printf("------------------\n");

    test_Vec3i();
    test_Vec3ui();
    test_Vec3l();
    test_Vec3lu();
    test_Vec3f();
    test_Vec3d();

    printf("\033[0;32mAll tests passed!\033[0m\n");

    return 0;
}
