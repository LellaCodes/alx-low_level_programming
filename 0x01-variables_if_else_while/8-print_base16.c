#include <stdio.h>

/**
  * main - prints all the numbers all the numbers of base 16 in lowercas
  * followed by a new line
  * Return: Retruns 0
  */
int main(void)
{
	int num;
	char hex;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
