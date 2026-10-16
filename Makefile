# Builds every program into build/<topic>/<name>.
#
#   make            build everything
#   make clean      remove build/
#   make build/strings/palindrome   build a single program
#
# The sources were written against an older toolchain: several use gets(),
# a few call functions before declaring them, and some rely on glibc
# (__fpurge, getpid). -std=gnu99 keeps gets() declared and
# -Wno-error=implicit-function-declaration lets the older style build on
# GCC 14 and newer.

CC       := gcc
CXX      := g++
CFLAGS   := -std=gnu99 -w -Wno-error=implicit-function-declaration
CXXFLAGS := -std=gnu++11 -w

# Not built: unfinished drafts that do not compile as a single unit.
EXCLUDE := expressions/cmdline_calculator.c \
	       bit-manipulation/swap_bits_nibbles_bytes.c

TOPICS   := arrays matrices strings numbers recursion bit-manipulation \
	        expressions menu-programs structures patterns cpp
C_SRCS   := $(filter-out $(EXCLUDE),$(wildcard $(addsuffix /*.c,$(TOPICS))))
CPP_SRCS := $(wildcard $(addsuffix /*.cpp,$(TOPICS)))
BINS     := $(patsubst %.c,build/%,$(C_SRCS)) $(patsubst %.cpp,build/%,$(CPP_SRCS))

.PHONY: all clean
all: $(BINS)

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

build/%: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf build
