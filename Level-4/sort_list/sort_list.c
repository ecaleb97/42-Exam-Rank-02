/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:37:19 by envillan          #+#    #+#             */
/*   Updated: 2024/11/06 23:06:27 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>
#include <unistd.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*start;

	start = lst;
	while (lst != NULL && lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (start);
}

int	ascending(int a, int b)
{
	return (a <= b);
}

t_list	*ft_new_element(int data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_list_foreach(t_list *lst, void (*f)(int))
{
	while (lst != NULL)
	{
		(*f)(lst->data);
		ft_putchar(' ');
		lst = lst->next;
	}
}

void	ft_putnbr(int number)
{
	if (number < 0)
	{
		number = -number;
		ft_putchar('-');
	}
	if (number > 9)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
}

int	main(void)
{
	t_list	*lst;

	lst = ft_new_element(1);
	lst->next = ft_new_element(5);
	lst->next->next = ft_new_element(3);
	ft_list_foreach(lst, (void *)ft_putnbr);
	sort_list(lst, ascending);
	ft_putchar('\n');
	ft_list_foreach(lst, (void *)ft_putnbr);
	ft_putchar('\n');
	return (0);
}
