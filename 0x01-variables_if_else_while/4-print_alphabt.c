#include <stdio.h>
/**
  * main - prints the alphanets in lowercase
  * prints alphanbets except q and e
  * Return: Returns 0
  */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
		putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
