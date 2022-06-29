/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:49:04 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/25 12:49:06 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	radix_sort(t_list **a, t_list **b, t_size s)
{
	int	i;
	int	t;
	int	j;

	i = 0;
	j = 0;
	while (check_indexing(*a))
	{
		i = 0;
		while (i < s.arg)
		{
			t = (*a)->index >> j;
			if ((t & 1) == 0)
				pb(b, a);
			else
				ra(a);
			i++;
		}
		while (*b)
			pa(a, b);
		j++;
	}
}
