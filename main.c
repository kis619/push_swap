/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:12:38 by kmilchev          #+#    #+#             */
/*   Updated: 2022/02/06 22:01:29 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;
	
	i = 0;
	if (argc > 1)
		i = validate_input(argv);
	else
		return (0);
	if (i == -1)
		return (write(2, "Error\n", 6));
	stack_a = get_initial_input(argv);
	stack_b = NULL;
	if (argc <= 5)
		sort_2_3_4(&stack_a, &stack_b);
	if (argc == 6)
		sort_5(&stack_a, &stack_b);
	ft_index(stack_a, argc - 2);
	sort(&stack_a, &stack_b, argc - 1);

	return (0);
}
