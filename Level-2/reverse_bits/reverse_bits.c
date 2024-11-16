/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 08:45:05 by envillan          #+#    #+#             */
/*   Updated: 2024/11/16 08:50:37 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned char reverse_bits(unsigned char octec)
{
	int i;
	unsigned char res;

	res = 0;
	i = 8;
	while (i > 0)
	{
		res = res * 2 + (octec % 2);
		octec = octec / 2;
		i--;
	}
	return (res);
}

int main(void)
{
	ft_putchar(reverse_bits(1));
	return (0);
}
