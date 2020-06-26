/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:55:17 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/26 17:22:04 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;

	if(min >= max)
		return (NULL);
	tab =(int*)malloc(sizeof(*tab) *(max - min));
	i = 0;

	while(min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return(tab);
}

