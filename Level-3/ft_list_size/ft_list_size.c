/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envillan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:05:41 by envillan          #+#    #+#             */
/*   Updated: 2024/11/04 18:18:12 by envillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

t_list	*ft_new_node(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = ft_new_node("First");
	second = ft_new_node("Second");
	third = ft_new_node("Third");
	first->next = second;
	second->next = third;
	printf("List size: %d\n", ft_list_size(first));
	printf("List size: %d\n", ft_list_size(second));
	printf("List size: %d\n", ft_list_size(third));
	printf("List size: %d", ft_list_size(NULL));
	return (0);
}
