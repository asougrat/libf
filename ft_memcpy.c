/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:05:35 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/15 21:44:57 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst,void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    unsigned char *s;

    i = 0;
    s = (unsigned char *)src;
    d = (unsigned char *)dst;
    
    if(dst == src)
    {
        return(dst);
    }
    while (i<n)
    {
       d[i]=s[i];
       i++;
    }
        return(d);
}
/*
#include <stdio.h>
int main()
{
    char dst[10] = "hello";
    char src[10] = "hello";
    printf("%s\n",dst);
    ft_memcpy(dst,src,3);
    printf("%s",dst);
}*/