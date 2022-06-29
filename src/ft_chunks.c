/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:34:29 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/24 21:34:30 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	ft_checkr(t_list *a, t_size s, int j)
{
	t_list	*t;
	int		i;

	i = 0;
	if (!a)
		return (-1);
	t = a;
	while (t)
	{
		if (t->index < j && t->index != s.arg - 1)
			return (t->index);
		t = t->next;
		i++;
	}
	return (-1);
}

int	ft_chunks(t_list **a, t_list **b, t_size s, int j)
{
	int	i;

	i = ft_checkr(*a, s, j);
	fast_movea(a, i, s.s_a);
	if (i != s.arg - 1)
		pb(b, a);
	return (0);
}
