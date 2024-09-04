#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int is_valid_base(char *base)
{
	int base_len = ft_strlen(base);

	if (base_len < 2)
	{
		return 0;
	}

	int i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return 0;
		}
		int j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return 0;
			}
			j++;
		}
		i++;
	}
	return 1;
}

int is_in_array(char element, char array[])
{
	int i = 0;

	while (array[i] != '\0')
	{
		if (array[i] == element)
		{
			return 1;
		}
		i++;
	}

	return 0; // Element not found
}

int get_base_value(char c, char *base)
{
	for (int i = 0; base[i] != '\0'; i++)
	{
		if (base[i] == c)
			return i;
	}
	return -1; // Character not in base
}

int ft_atoi_base(char *str, char *base)
{
	if (!is_valid_base(base))
	{
		return 0;
	}
	int i = 0, number_part = 1, sign = 1;
	int int_result = 0;

	while (str[i] != '\0' && number_part)
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		if (is_in_array(str[i], base) && is_in_array(str[i], base))
		{
			int digit_value = str[i] - '0';
			int_result = int_result * 10 + digit_value;
			if (is_in_array(str[i + 1], base) || is_in_array(str[i + 1], base))
			{
				number_part = 0;
			}
		}
		i++;
	}

	return int_result * sign;
}

int main()
{
	char value[] = " -=-=-=-=-=--r 908 f9huji0hfui-+1234ab567";

	printf("%d\n", ft_atoi_base(value, "0123456789"));
	printf("%d\n", ft_atoi_base(value, "01"));
	printf("%d\n", ft_atoi_base(value, "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base(value, "poneyvif"));
}
