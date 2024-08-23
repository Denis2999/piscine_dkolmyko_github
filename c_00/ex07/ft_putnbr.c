/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:10:19 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/23 11:14:25 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	char	buffer[16];
	int		len;

	len = snprintf(buffer, sizeof(buffer), "%d", nb);
	write(1, buffer, len);
}
