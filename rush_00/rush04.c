#include <unistd.h>

void ft_putchar(char a, char c, char b, int size_x, int x);

void rush(int x, int y)
{
	int size_x, size_y = 1;

	while (size_y <= y)
	{
		size_x = 1;
		while (size_x <= x)
		{

			if (size_y == 1)
			{
				ft_putchar('A', 'C', 'B', size_x, x);
			}
			else if (size_y == y)
			{
				ft_putchar('C', 'A', 'B', size_x, x);
			}
			else
			{
				ft_putchar('B', 'B', ' ', size_x, x);
			}

			size_x++;
		}
		write(1, "\n", x);
		size_y++;
	}
}
