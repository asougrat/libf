/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:20:00 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/15 20:54:04 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *str;
    
    i = 0;
    str = (unsigned char *)s;
    
    while(i < n)
    {
       *str = '\0';
       str++;
       i++;
    }
}/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char test[13] = "hello World";
    printf("%s\n",test);    
    ft_bzero(test,11);
    printf("%s\n",test);   
}*/