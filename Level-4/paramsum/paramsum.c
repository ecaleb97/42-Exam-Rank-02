/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:17:21 by envillan          #+#    #+#             */
/*   Updated: 2024/11/15 23:36:15 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	ft_atoi(char *str)
// {
// 	int	result;
// 	int	i;
// 	int	sign;

// 	sign = 1;
// 	result = 0;
// 	i = 0;
// 	while (is_space(str[i]))
// 		i++;
// 	if (str[i] == '-')
// 		sign = -1;
// 	if (str[i] == '-' || str[i] == '+')
// 		i++;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + str[i] - '0';
// 		i++;
// 	}
// 	return (sign * result);
// }

void	ft_putnbr(int number)
{
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + '0');
}

int	main(int argc, char **argv)
{
	// int	i;
	(void)argv;
	ft_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}
