#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include <kernel/tty.h>

void kernel_early(void)
{
	terminal_initialize();
}

void kernel_main(void)
{
	printf("Hello, kernel World!\n");
	printf("Test, %c\n", 'c');
	printf("Test3: %c\nTest4: %c",'a','b');
}
