/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingalgo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:35:44 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/24 21:35:45 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

t_size	chunkloop(t_list **a, t_list **b, t_size s, int j)
{
	int	i;
	int	l;

	l = 80;
	if (s.arg <= 80)
		l = 60;
	else if (s.arg <= 60)
		l = 40;
	j = 20;
	while (j < l && check_indexing(*a))
	{
		i = 0;
		while (i < 10)
		{
			if (!ft_chunks(a, b, s, j) && check_indexing(*a))
			{
				s.s_a--;
				s.s_b++;
			}
			i++;
		}
		j += 10;
	}
	return (s);
}

void	sortingalgo(t_list **a, t_list **b, t_size s)
{
	int	j;

	j = 20;
	s = chunkloop(a, b, s, j);
	while ((*a)->next)
	{
		if ((*a)->index == s.arg - 1)
			ra(a);
		pb(b, a);
		s.s_a--;
		s.s_b++;
	}
	push_to_a(a, b, s);
}

int	l_value(int arg, int l)
{
	if (arg <= 60)
		l = 50;
	if (arg <= 50)
		l = 40;
	if (arg <= 40)
		l = 30;
	if (arg <= 30)
		l = 20;
	return (l);
}

t_size	chunkloop2(t_list **a, t_list **b, t_size s, int j)
{
	int	i;
	int	l;

	l = 60;
	l = l_value(s.arg, l);
	while (j < l && check_indexing(*a))
	{
		i = 0;
		while (i < 10)
		{
			if (!ft_chunks(a, b, s, j) && check_indexing(*a))
			{
				s.s_a--;
				s.s_b++;
			}
			i++;
		}
		j += 10;
	}
	return (s);
}

void	sortingalgo2(t_list **a, t_list **b, t_size s)
{
	int	j;

	j = 10;
	s = chunkloop2(a, b, s, j);
	while ((*a)->next)
	{
		if ((*a)->index == s.arg - 1)
			ra(a);
		pb(b, a);
		s.s_a--;
		s.s_b++;
	}
	push_to_a(a, b, s);
}
