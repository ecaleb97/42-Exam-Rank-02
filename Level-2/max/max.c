/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:47:54 by envillan          #+#    #+#             */
/*   Updated: 2024/10/30 22:54:40 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int				result;
	unsigned int	i;

	if (len == 0)
		return (0);
	i = 0;
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

int	main(void)
{
	int	a[4] = {1, 2, 3, 10};

	printf("%d", max(a, 4));
	return (0);
}
