#include <stdio.h>
/**
* main - Entry point
* Destription: "Print numbers with option"
* Return: Always return 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
