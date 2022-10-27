/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:31:28 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/13 19:05:04 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int s;
    int r;
    
    i = 0;
    s = 1;
    r = 0;
    
while ((str[i]>= 9 && str[i] <= 13) || str[i]==32)
            i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        s *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        r *= 10;
          r+=str[i]-48;
          i++;  
    }
    return(s*r);
}/*
#include <stdio.h>

int main()
{
    char test[10] = "hello";
    
    printf("%d",ft_atoi(test));
}*/