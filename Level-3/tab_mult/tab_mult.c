/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:36:40 by envillan          #+#    #+#             */
/*   Updated: 2024/11/06 21:53:41 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int	ft_atoi(char *string)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (string[i] != '\0')
	{
		result = result * 10 + string[i] - '0';
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	i;
	int	number;

	i = 1;
	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(number);
			ft_putstr(" = ");
			ft_putnbr(i * number);
			if (i < 9)
				write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
