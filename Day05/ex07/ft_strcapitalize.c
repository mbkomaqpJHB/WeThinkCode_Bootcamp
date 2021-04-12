/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 09:44:19 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/17 11:15:59 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
		{
			str[i] -= 32;
		}
		else if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return str;
}