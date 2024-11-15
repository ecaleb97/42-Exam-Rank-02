/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:08:40 by envillan          #+#    #+#             */
/*   Updated: 2024/11/07 08:25:45 by envillan         ###   ########.fr       */
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

void	expand_str(char *str)
{
	int	i;

	i = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (is_space(str[i]))
		{
			if (str[i + 1] > ' ' && (str[i + 1] != '\0'))
				ft_putstr("   ");
		}
		else if (!is_space(str[i]))
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
