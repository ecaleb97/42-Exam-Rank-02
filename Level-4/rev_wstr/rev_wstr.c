/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:41:37 by envillan          #+#    #+#             */
/*   Updated: 2024/11/15 23:15:22 by envillan         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	rev_wstr(char *str)
{
	int	i;
	int	j;
	int	word;

	i = ft_strlen(str) - 1;
	word = 1;
	while (is_space(str[i]))
		i--;
	while (i >= 0)
	{
		while (i >= 0 && (str[i] == '\0' || is_space(str[i])))
			i--;
		j = i;
		while (j >= 0 && !is_space(str[j]))
			j--;
		if (word == 0)
			ft_putchar(' ');
		write(1, str + j + 1, i - j);
		word = 0;
		i = j;
	}
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
		rev_wstr(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
