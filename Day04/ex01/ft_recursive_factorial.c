/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:55:51 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/16 09:20:31 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
