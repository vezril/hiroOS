#include <stdio.h>
#include <stdlib.h>

__attribute__((__noreturn__)) void exit(int code) {
	// TODO: Add proper kernel panic.

	while(1) { }
	__builtin_unreachable();
}
