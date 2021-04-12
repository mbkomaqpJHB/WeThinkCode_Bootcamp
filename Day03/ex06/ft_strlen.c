/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 08:55:59 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/12 12:18:05 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}