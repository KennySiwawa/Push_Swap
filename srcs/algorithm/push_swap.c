/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:12:39 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 16:12:42 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_node *stack_a, t_node *stack_b, int stack_size)
{
	stack_a = last_or_first_node(stack_a, false);
	if (is_stack_sorted(stack_a, false))
		return ;
	if (stack_size == 2)
		execute(&stack_a, &stack_b, "sa", false);
	else if (stack_size == 3)
		sort_three_elements(stack_a);
	else if (stack_size > 3 && stack_size < 6)
		advanced_sort_three_plus(stack_a, stack_b, stack_size);
	else
		perform_sort(stack_a, stack_b);
}
