/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:03:13 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/26 20:03:14 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	sort_3(t_list **a, t_size s)
{
	if ((*a)->index > (*a)->next->index && last_index(a) == s.arg - 1)
		sa(a);
	else if (last_index(a) == s.arg - 3 && (*a)->index > (*a)->next->index)
	{
		sa(a);
		rra(a);
	}	
	else if (last_index(a) == s.arg - 2 && (*a)->index == s.arg - 1)
		ra(a);
	else if ((*a)->index == s.arg - 2 && last_index(a) == s.arg - 3)
		rra(a);
	else if ((*a)->index == s.arg - 3 && last_index(a) == s.arg - 2)
	{
		sa(a);
		ra(a);
	}		
}

void	sort_5(t_list **a, t_list **b, t_size s)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*a)->index > 1)
			ra(a);
		else
		{	
			pb(b, a);
			i++;
		}	
	}
	sort_3(a, s);
	while (*b)
		pa(a, b);
	if ((*a)->index > (*a)->next->index)
		sa(a);
}

void	sort_4(t_list **a, t_list **b, t_size s)
{
	int	i;

	i = 0;
	while (i < 1)
	{
		if ((*a)->index > 0)
			ra(a);
		else
		{
			pb(b, a);
			i++;
		}	
	}
	sort_3(a, s);
	while (*b)
		pa(a, b);
	if ((*a)->index > (*a)->next->index)
		sa(a);
}

void	sort_10(t_list **a, t_list **b, t_size s)
{
	int	i;

	i = 0;
	while (i < s.arg - 3)
	{
		if ((*a)->index >= s.arg - 3)
			ra(a);
		else
		{	
			pb(b, a);
			i++;
		}			
	}
	s.s_a -= i;
	s.s_b += i;
	sort_3(a, s);
	push_to_a(a, b, s);
}

void	simple_sort(t_list **a, t_list **b, t_size s)
{
	int	i;

	i = 0;
	if (s.arg <= 3)
		sort_3(a, s);
	else if (s.arg <= 4)
		sort_4(a, b, s);
	else if (s.arg <= 5)
		sort_5(a, b, s);
	else if (s.arg <= 10)
		sort_10(a, b, s);
}
