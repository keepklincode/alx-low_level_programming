#include <stdio.h>
/**
* main - Entry point
* Description: "Print aphabate lowercase with option"
* Return: Always return 0
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 100 || n == 103)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
