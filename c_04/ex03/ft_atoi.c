/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:24:10 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/04 17:56:27 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0, number_part = 1, sign = 1;
	int int_result = 0;

	while (str[i] != '\0' && number_part)
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		if ('0' <= str[i] && str[i] <= '9')
		{
			int digit_value = str[i] - '0';
			int_result = int_result * 10 + digit_value;
			if ('0' > str[i + 1] || str[i + 1] > '9')
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
	// char value[] = " ---+--+1234ab567";
	char value[] = " -=-=-=-=-=--r908f9huji0hfui-+1234ab567";

	printf("%d\n", ft_atoi(value));
	return 0;
}