/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:25:45 by envillan          #+#    #+#             */
/*   Updated: 2024/11/06 21:35:54 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	absolute_value(int number)
{
	if (number < 0)
		return (-number);
	return (number);
}

int	*ft_range(int start, int end)
{
	int	matrix_size;
	int	*tab;
	int	i;

	matrix_size = absolute_value(end - start) + 1;
	tab = (int *)malloc(sizeof(int) * matrix_size);
	i = 0;
	while (i < matrix_size)
	{
		if (end > start)
		{
			tab[i] = start;
			start++;
			i++;
		}
		else
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
	return (tab);
}

int	main(void)
{
	int	start;
	int	end;
	int	*matrix;
	int	matrix_size;
	int	i;

	start = 5;
	end = 10;
	matrix = ft_range(start, end);
	matrix_size = abs(end - start) + 1;
	i = 0;
	while (i < matrix_size)
	{
		printf("%d ", matrix[i]);
		i++;
	}
}
