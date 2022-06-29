/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_indexing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:33:31 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/24 21:33:36 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	check_indexing(t_list *a)
{
	t_list	*t;

	if (!a)
		return (0);
	t = a;
	while (t && t->next)
	{
		if (t->index < t->next->index)
			t = t->next;
		else
			return (1);
	}
	return (0);
}
