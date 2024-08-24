/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:10:19 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/24 10:34:24 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char buffer[16];
	int len;

	len = snprintf(buffer, sizeof(buffer), "%d", nb);
	write(1, buffer, len);
}
int main(void)
{
	ft_putnbr(42);

	return 0;
}