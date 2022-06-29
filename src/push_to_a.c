/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:35:19 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/24 21:35:21 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	push_to_a(t_list **a, t_list **b, t_size s)
{
	int	index;

	while (*b)
	{	
		if (s.s_a)
			index = (*a)->index - 1;
		if ((*b)->index == index && (*b))
		{
			pa(a, b);
			s.s_b--;
			s.s_a++;
		}
		else
			fast_moveb(b, index, s.s_b);
	}
}
