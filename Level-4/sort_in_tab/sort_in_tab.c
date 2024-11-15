/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:14:22 by envillan          #+#    #+#             */
/*   Updated: 2024/11/06 22:35:54 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_in_tab(int *tab, unsigned int size)
{
	int				temp;
	unsigned int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

void	print_matrix(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	printf("[");
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("]");
}

int	main(void)
{
	int				tab[5] = {1, 5, 10, 3, 100};
	unsigned int	size;

	size = 5;
	print_matrix(tab, size);
	sort_in_tab(tab, size);
	printf("\n");
	print_matrix(tab, size);
	return (0);
}
