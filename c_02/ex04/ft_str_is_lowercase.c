/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:36:13 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/29 12:44:03 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ('a' > str[counter] && str[counter] > 'z')
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
