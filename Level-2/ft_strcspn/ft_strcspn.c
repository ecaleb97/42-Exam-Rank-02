/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:28:46 by envillan          #+#    #+#             */
/*   Updated: 2024/10/30 21:35:21 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcspn(const char *s, const char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (s[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%d", ft_strcspn("Hola", "jdfola"));
	return (0);
}
