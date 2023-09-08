#include <stdio.h>

/**
  * main - prints all digit numbers of base ten
  * starting from zero
  * Return: Retruns 0
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
