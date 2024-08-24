#include <unistd.h>

void ft_putchar(char a, char c, char b, int size_x, int x)
{
	if (size_x == 1)
	{
		write(1, &a, 1);
	}
	else if (size_x == x)
	{
		write(1, &c, 1);
	}
	else
	{
		write(1, &b, 1);
	}
}