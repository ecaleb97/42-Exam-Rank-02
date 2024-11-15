/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:20:35 by envillan          #+#    #+#             */
/*   Updated: 2024/11/15 22:52:06 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

void	print_first_word(char *str, int i)
{
	while (!is_space(str[i]) && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	rot_string(char *str)
{
	int	i;
	int	j;

	j = 0;
	while (str[j] != '\0' && is_space(str[j]))
		j++;
	i = j;
	while (str[i] != '\0' && !is_space(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && !is_space(str[i]) && is_space(str[i - 1]))
		{
			while (str[i] != '\0' && !is_space(str[i]))
			{
				ft_putchar(str[i]);
				i++;
			}
			ft_putchar(' ');
		}
		i++;
	}
	print_first_word(str, j);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (1);
	}
	if (argc == 2)
	{
		rot_string(argv[1]);
	}
	return (0);
}
