/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:58:31 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/05/15 23:15:41 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_list **stack)
{
	int	t;

	t = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = t;
	t = (*stack)->index;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->index = t;
}

void	sa(t_list **a)
{
	ft_swap(a);
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	ft_swap(b);
	ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}

void	rrr(t_list **a, t_list **b)
{
	r_rotate(a);
	r_rotate(b);
	ft_printf("rrr\n");
}
