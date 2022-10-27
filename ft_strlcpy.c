/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:58:27 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/18 19:30:48 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i=0;
    j=0;

    while (src[i])
    {
        i++;
    }
    if(size == 0)
    {
       return(i); 
    }
    while (j < size-1 && src[j])
    {
        dst[j]=src[j];
        j++;
    }
        dst[j]='\0';
        return(i);
}
/*
#include <stdio.h>
int main()
{
    char str1[]="hello";
    char str2[]="wor"; //it return the lenght of src = str2
    printf("%ld",ft_strlcpy(str1,str2,10));
}*/