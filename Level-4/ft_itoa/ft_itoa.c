/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:26:57 by envillan          #+#    #+#             */
/*   Updated: 2024/11/16 00:47:32 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_abs(int number)
{
	if (number < 0)
		return (-number);
	return (number);
}

int	ft_number_len(int number)
{
	int	i;

	if (number == 0)
		return (1);
	i = 0;
	while (number != 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int		length;
	int		i;

	length = ft_number_len(nbr);
	i = 0;
	if (nbr < 0)
		i++;
	length = length + i;
	result = (char *)malloc((length + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[length] = '\0';
	result[0] = '-';
	while ((length - 1) >= i)
	{
		result[length - 1] = ft_abs(nbr % 10) + '0';
		nbr /= 10;
		length--;
	}
	return (result);
}

int	main(void)
{
	ft_putstr(ft_itoa(400));
	return (0);
}
