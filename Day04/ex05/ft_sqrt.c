/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:36:34 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/15 12:49:30 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		result;
	int		sqrt;

	result = 0;
	sqrt = nb / 2;
	while (sqrt != result)
	{
		result = sqrt;
		sqrt = (nb / result + result)/2;
	}
	return (sqrt);
}
