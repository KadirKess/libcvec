# libcvec

**libcvec** is a lightweight C library for 2D and 3D vector math. It provides support for multiple numeric types, including integers, unsigned integers, longs, unsigned longs, floats, and doubles. The library implements basic vector operations such as addition, subtraction, Hadamard multiplication, scalar multiplication/division, dot product, length, and normalization (for floating-point types).

## Project Structure

```plaintext
.
├── Makefile           # Build script for library and tests
├── README.md          # This file
├── src
│   ├── Vec2           # 2D vector implementation files
│   │   ├── Vec2.h     # Header file for Vec2 types and functions
│   │   ├── Vec2d.c    # Vec2 operations for double
│   │   ├── Vec2f.c    # Vec2 operations for float
│   │   ├── Vec2i.c    # Vec2 operations for int
│   │   ├── Vec2l.c    # Vec2 operations for long
│   │   ├── Vec2lu.c   # Vec2 operations for unsigned long
│   │   └── Vec2ui.c   # Vec2 operations for unsigned int
│   └── Vec3           # 3D vector implementation files
│       ├── Vec3.h     # Header file for Vec3 types and functions
│       ├── Vec3d.c    # Vec3 operations for double
│       ├── Vec3f.c    # Vec3 operations for float
│       ├── Vec3i.c    # Vec3 operations for int
│       ├── Vec3l.c    # Vec3 operations for long
│       ├── Vec3lu.c   # Vec3 operations for unsigned long
│       └── Vec3ui.c   # Vec3 operations for unsigned int
└── tests              # Test files for library functions
    ├── Vec2_tests.c   # Unit tests for Vec2 functionality
    ├── Vec3_tests.c   # Unit tests for Vec3 functionality
    ├── tests.c        # Main test runner
    └── tests.h        # Header for tests
```

## Features

- **2D Vectors (`Vec2`) and 3D Vectors (`Vec3`)**
  Support for various numeric types:
  - **Integer types:** `int`, `unsigned int`, `long`, `unsigned long`
  - **Floating-point types:** `float`, `double`
- **Operations provided:**
  - **Initialization:** Create vectors with specific coordinates.
  - **Arithmetic:** Addition, subtraction, scalar multiplication, and scalar division.
  - **Component-wise operations:** Hadamard multiplication.
  - **Properties:** Length (magnitude) and dot product.
  - **Normalization:** (Floating-point vectors only)

## Build Instructions

This project uses a Makefile to build the library and run tests.

1. **Building the Library**

   To compile the library and generate a static archive (`libcvec.a`), run:

   ```bash
   make
   ```

   The compiled objects and the archive will be placed in the `build` directory. Additionally, the header files (`Vec2.h` and `Vec3.h`) are copied into that directory.

2. **Running Tests**

   To compile and run the tests, simply run:

   ```bash
   make test
   ```

   This command compiles the tests using the library and executes the test binary. All tests (for both 2D and 3D vectors) should pass if the library functions correctly.

3. **Cleaning Up**

   To remove generated files and clean up the build directories, run:

   ```bash
   make clean
   ```

## Usage

To use **libcvec** in your own project:

1. **Include the Headers**

   Include the appropriate header files in your source files:

   ```c
   #include "Vec2.h"  // For 2D vectors
   #include "Vec3.h"  // For 3D vectors
   ```

2. **Linking**

   When compiling your project, link against the generated library (e.g., `libcvec.a`). For example:

   ```bash
   gcc -Wall -Wextra -std=c99 -o myapp myapp.c -L/path/to/build -lcvec
   ```

3. **Example**

   Here's a simple example using a 2D vector of floats:

   ```c
   #include "Vec2.h"

   int main(void)
   {
       // Initialize two 2D float vectors
       struct Vec2f a = Vec2f_init(1.0f, 2.0f);
       struct Vec2f b = Vec2f_init(3.0f, 4.0f);

       // Add the vectors
       struct Vec2f result = Vec2f_add(a, b);
       printf("Result: (%f, %f)\n", result.x, result.y);

       // Normalize vector a
       struct Vec2f norm = Vec2f_normalize(a);
       printf("Normalized a: (%f, %f)\n", norm.x, norm.y);

       return 0;
   }
   ```

## Contributing

Feel free to fork the repository and submit pull requests with bug fixes, improvements, or new features. Please ensure that your changes are accompanied by appropriate tests.
