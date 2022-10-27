/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:36:23 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/15 20:29:49 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *p;

	i=0;
	p = (unsigned  char *)s;
    
	while(i < n)
	{
		*p = (unsigned char)c;//here we put the char in the string
		i++;
		p++;
	}
	return(s);
}/*
#include <string.h>
#include <stdio.h>

int main () {
   char str[50];

   strcpy(str,"hello");
   puts(str);

   ft_memset(str,'a',3);
   puts(str);
   
   return(0);
}*/
