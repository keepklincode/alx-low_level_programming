#include <stdio.h>
/**
* main - Entry point
* Description: "Print reverse of alphabate"
* Return: Always return 0
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
