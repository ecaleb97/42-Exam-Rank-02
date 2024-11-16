/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 08:19:18 by envillan          #+#    #+#             */
/*   Updated: 2024/11/16 08:37:10 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	get_last_word_last_char_index(char *str, int index)
{
	while (index > 0 && is_space(str[index]))
		index--;
	return (index);
}

int	get_last_word_first_char_index(char *str, int index)
{
	while (index > 0 && !is_space(str[index]))
		index--;
	return (index);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int	i;
	int	end_last_word;
	int	start_last_word;

	i = ft_strlen(str) - 1;
	end_last_word = get_last_word_last_char_index(str, i);
	start_last_word = get_last_word_first_char_index(str, end_last_word);
	start_last_word++;
	while (start_last_word <= end_last_word)
	{
		ft_putchar(str[start_last_word]);
		start_last_word++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
