/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:57:52 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/25 12:50:05 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	if_error(char **av, int ac)
{
	if (ac == 2)
		return (0);
	else if (ac < 2)
		return (0);
	if (!is_error(av))
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_size	s;

	s.arg = ac - 1;
	s.s_a = ac - 1;
	s.s_b = 0;
	if (!if_error(av, ac))
		return (printerr());
	to_stack(&a, av, ac - 1);
	indexing(&a);
	if (!check_indexing(a))
		return (0);
	if (s.arg <= 10)
		simple_sort(&a, &b, s);
	else if (s.arg <= 60)
		sortingalgo2(&a, &b, s);
	else if (s.arg <= 100)
		sortingalgo(&a, &b, s);
	else
		radix_sort(&a, &b, s);
	return (0);
}
