/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:34:59 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/24 21:35:01 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	push(t_list **to, t_list **from)
{
	t_list	*t;
	t_list	*t2;

	if (!from)
		return ;
	else
	{
		t2 = (*from)->next;
		t = *to;
		*to = *from;
		(*to)->next = t;
		*from = t2;
	}	
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_list **b, t_list **a)
{
	push(b, a);
	ft_printf("pb\n");
}

void	rotate(t_list **stack)
{
	t_list	*node;

	node = *stack;
	while (node->next)
		node = node->next;
	node->next = *stack;
	*stack = (*stack)->next;
	node->next->next = NULL;
}

void	r_rotate(t_list **stack)
{
	t_list	*node;

	node = *stack;
	while (node->next->next)
			node = node->next;
	node->next->next = *stack;
	*stack = node->next;
	node->next = NULL;
}
