CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -pedantic

TEST = tests
SRCDIRS = src/Vec2 src/Vec3
BUILDDIR = build

SRCS = $(foreach d,$(SRCDIRS),$(wildcard $(d)/*.c))
OBJS = $(patsubst %.c,$(BUILDDIR)/%.o,$(SRCS))

all: $(BUILDDIR)/libcvec.a

$(BUILDDIR)/libcvec.a: $(OBJS)
	mkdir -p $(BUILDDIR)
	ar rcs $@ $(OBJS)
	cp src/Vec2/Vec2.h $(BUILDDIR)
	cp src/Vec3/Vec3.h $(BUILDDIR)

$(BUILDDIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(BUILDDIR)/libcvec.a
	$(CC) $(CFLAGS) -o $(BUILDDIR)/test $(TEST)/tests.c $(TEST)/Vec2_tests.c $(TEST)/Vec3_tests.c -L$(BUILDDIR) -lcvec
	./$(BUILDDIR)/test

clean:
	find $(SRCDIRS) -name '*.o' -delete
	rm -rf $(BUILDDIR)

.PHONY: all lib test clean
