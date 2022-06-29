/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:36:51 by hfanzaou          #+#    #+#             */
/*   Updated: 2022/06/29 21:38:20 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	moves(char *s, t_list **a, t_list **b)
{
	if (!ft_strncmp(s, "pa\n", 3))
		pa(a, b);
	else if (!ft_strncmp(s, "pb\n\n", 3))
		pb(b, a);
	else if (!ft_strncmp(s, "sa\n\n", 3))
		sa(a);
	else if (!ft_strncmp(s, "sb\n", 3))
		sb(b);
	else if (!ft_strncmp(s, "ss\n", 3))
		ss(a, b);	
	else if (!ft_strncmp(s, "ra\n", 3))
		ra(a);
	else if (!ft_strncmp(s, "rb\n", 3))
		rb(b);
	else if (!ft_strncmp(s, "rr\n", 3))
		rr(a, b);
	else if (!ft_strncmp(s, "rra\n", 3))
		rra(a);
	else if (!ft_strncmp(s, "rrb\n", 3))
		rrb(b);
	else if (!ft_strncmp(s, "rrr\n", 3))
		rrr(a, b);
	return ;	
}
int main(int ac, char **av)
{
	t_list *a;
	t_list *b;
	char *line;

	if (ac < 2)
		return (0);
	to_stack(&a, av, ac - 1);
	indexing(&a);	
	line = get_next_line(0);
	while (line)
	{
		moves(line, &a, &b);
		free(line);
		line = get_next_line(0);
	}
	if (!check_indexing(a))
		write(1, "ok\n", 3);
	else
		write(1, "ko\n", 3);

}
