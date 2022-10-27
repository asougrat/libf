/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:46:08 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/18 17:44:29 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;
    
    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    
    while(i<n)
    {
        if(str1[i] != str2[i])
            return(str1[i] - str2[i]);
            i++;
    }
       return(0);
}
/*
code ascii
int main () {
   maj kbr mn min f l ascii
}*/