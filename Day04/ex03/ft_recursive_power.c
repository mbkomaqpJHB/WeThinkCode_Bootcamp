/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:27:41 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/16 09:33:44 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power != '\0')
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
