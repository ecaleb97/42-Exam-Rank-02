/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:34:27 by envillan          #+#    #+#             */
/*   Updated: 2024/10/30 19:42:39 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*rev_print(char *str)
{
	int	count;

	count = ft_strlen(str) - 1;
	while (count >= 0)
	{
		write(1, &str[count], 1);
		count--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(void)
{
	rev_print("Hola");
	return (0);
}
