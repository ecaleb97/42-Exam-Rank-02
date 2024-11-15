/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:31:44 by envillan          #+#    #+#             */
/*   Updated: 2024/11/07 08:51:22 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return ((c == ' ') || (c >= 9 && c <= 13));
}

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

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (is_space(str[i - 1]))
		{
			if (str[i] >= 'a' && (str[i] != 'z'))
				str[i] = str[i] - 32;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		str_capitalizer(argv[1]);
	}
	ft_putchar(' ');
	return (0);
}
