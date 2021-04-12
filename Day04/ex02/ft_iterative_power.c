/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:05:18 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/16 09:25:34 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}

	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
