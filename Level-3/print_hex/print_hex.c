/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:25:05 by envillan          #+#    #+#             */
/*   Updated: 2024/11/12 10:08:22 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int number)
{
	if (number > 9)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
}

void	print_hex(unsigned int number)
{
	char	hex[16] = "0123456789abcdef";

	if (number >= 16)
		print_hex(number / 16);
	ft_putchar(hex[number % 16]);
}

int	main(int argc, char **argv)
{
	int	number;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		print_hex(number);
	}
	ft_putchar('\n');
	return (0);
}
