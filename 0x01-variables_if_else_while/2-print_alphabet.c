#include <stdio.h>

/**
  * main - print the alphabet in lowercase
  * followed by a new line
  * Return:  Returns 0
  */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
