/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <parallels@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:42:09 by fgonzale          #+#    #+#             */
/*   Updated: 2023/06/05 11:48:58 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_ra_sa_rra(t_stack **stack)
{
	ra(stack);
	sa(stack);
	rra(stack);
}

void	do_sa_rra(t_stack **stack)
{
	sa(stack);
	rra(stack);
}

int	abs(int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	return (nbr);
}
