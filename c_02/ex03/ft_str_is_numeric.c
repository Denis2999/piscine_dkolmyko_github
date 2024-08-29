/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:36:13 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/29 12:41:32 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ('0' > str[counter] && str[counter] > '9')
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
