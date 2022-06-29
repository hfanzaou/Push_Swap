/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:33:52 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/24 21:33:53 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	fast_moveb(t_list **b, int index, int c)
{
	int		count;
	t_list	*temp;

	count = 1;
	temp = *b;
	while (temp && temp->index != index)
	{
		temp = temp->next;
		count++;
	}
	if (count <= c / 2 + 1)
		while ((*b) && (index != (*b)->index))
			rb(b);
	else
		while ((*b) && (*b)->index != index)
			rrb(b);
}

void	fast_movea(t_list **a, int index, int c)
{
	int		count;
	t_list	*temp;

	count = 1;
	temp = *a;
	while (temp && temp->index != index)
	{
		temp = temp->next;
		count++;
	}
	if (count <= c / 2 + 1)
		while ((*a) && (index != (*a)->index))
			ra(a);
	else
		while ((*a) && (*a)->index != index)
			rra(a);
}
