#include <stdio.h>

/**
  * main - prints lower case alphabets in reverse
  * prints
  * Return: Returns 0
  */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
