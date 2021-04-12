/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:17:52 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/12 12:22:43 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		len;
	int		strt;
	int		end;

	len = 0;
	while (str[len])
	{
		len++;
	}

	strt = 0;
	end = len - 1;
	while (end > strt)
	{
		int		temp;
		temp = str[end];
		str[end] = str[strt];
		str[strt] = temp;
		strt++;
		end--;
	}
	return str;
}
