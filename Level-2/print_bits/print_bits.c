/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 08:38:11 by envillan          #+#    #+#             */
/*   Updated: 2024/11/16 08:43:46 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octec)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octec >> i & 1) + '0';
		ft_putchar(bit);
	}
}

int	main(void)
{
	print_bits(2);
	return (0);
}
