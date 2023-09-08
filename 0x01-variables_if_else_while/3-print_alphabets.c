#include <stdio.h>
/**
  * main - list alphabets both in small and capital leters
  * ends with a new line
  * Return: Returns 0
  */
int main(void)
{
	char az;

	char AZ;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}

	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}

	putchar('\n');
	return (0);
}
