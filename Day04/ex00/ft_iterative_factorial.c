/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:18:49 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/16 09:13:00 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}

	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
