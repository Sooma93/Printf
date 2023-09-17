#include "../main.h"
#include <stdio.h>
#include "../_printf.c"
#include <string.h>

/**
 * run_tests - run unit tests for printf.
 */
void run_tests(void)
{
	int result;

	printf("Test case 1: print single character\n");
	printf("Expected result: A\n");
	printf("Actual result: ");
	result = _printf("%c", 'A');
	printf("\nExpected length: 1\n");
	printf("Actual length %d\n", result);

	printf("\nTest case 2: print a string\n");
	printf("Expected result: Hello world!\n");
	printf("Actual result: ");
	result = _printf("%s", "Hello world!\n");
	printf("\nExpected length: %lu\n", strlen("Hello world!"));
	printf("Actual length: %d\n", result);

	printf("\nTest case 3: print a litral '%%'\n");
	printf("Expected result: %%\n");
	printf("Actual result: ");
	result = _printf("%%");
	printf("\nExpected length: %lu\n", strlen("%%"));
	printf("Actual length: %d", result);
}

/**
 * main - Test printf function.
 *
 * Return: always 0
 */
int main(void)
{
	run_tests();

	return (0);
}
