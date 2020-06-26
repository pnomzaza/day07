/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnomzaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:32:32 by pnomzaza          #+#    #+#             */
/*   Updated: 2020/06/26 16:50:37 by pnomzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

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
int main() 
{ 
    char source[] = "Putumani Nomzaza"; 
  
    // A copy of source is created dynamically 
    // and pointer to copy is returned. 
    char* target = strdup(source);  
  
    printf("%s", target); 
    return 0; 
} 
