#include <stdio.h>

/**
  * main - prints all the single digit numbers
  * from 0 - 9
  * Return: Returns 0
  */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
