/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:39:43 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/08/26 18:52:30 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int counter_a = 1, counter_b = 1, temp_val;

	while (counter_a < size)
	{
		while (counter_b < size)
		{
			if (tab[counter_a] < tab[counter_a - 1])
			{
				temp_val = tab[counter_a];
				tab[counter_a] = tab[counter_a - 1];
				tab[counter_a - 1] = temp_val;
			};
			counter_b++;
		}
		counter_a++;
	}
}

int main(void)
{
	int tab[5] = {5, 4, 3, 2, 1};

	int num_elements = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(tab, num_elements);
	for (int i = 0; i < num_elements; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	return 0;
}
