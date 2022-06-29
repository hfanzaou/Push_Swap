/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_stack_indexing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:36:02 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/24 21:36:04 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	last_index(t_list **a)
{
	t_list	*t;

	t = *a;
	while (t->next)
		t = t->next;
	return (t->index);
}

void	to_stack(t_list **a, char **av, int size)
{
	while (size > 0)
	{
		ft_lstadd_front(a, ft_lstnew(atoi(av[size])));
		size--;
	}
}

void	indexing(t_list	**a)
{
	t_list	*t;
	t_list	*t2;
	int		ind;

	ind = 0;
	t = *a;
	while (t)
	{
		t2 = *a;
		while (t2)
		{
			if (t2->content < t->content)
			ind++;
			t2 = t2->next;
		}
		t->index = ind;
		ind = 0;
		t = t->next;
	}
}
