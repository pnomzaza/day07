/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:32:32 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/26 16:05:18 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src)
{
	int i;
	int len;
	char *str;

	len = 0;

	while(src[len])
	
			len++;
	str =  (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while(i < len)
	{
		str[i] = src[i];
		i++;

	}
	return(str);

}

