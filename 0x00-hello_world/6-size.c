#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{	printf("char has %zu bits\n", CHAR_BIT * sizeof(char)); 
	printf("short has %zu bits\n", CHAR_BIT * sizeof(short)); 
	printf("int has %zu bits\n", CHAR_BIT * sizeof(int)); 
	printf("long has %zu bits\n", CHAR_BIT * sizeof(long)); 
	printf("long long has %zu bits\n", CHAR_BIT * sizeof(long long)); 
	printf("float has %zu bits\n", CHAR_BIT * sizeof(float)); 
	printf("double has %zu bits\n", CHAR_BIT * sizeof(double)); 
	return (0); 
}
