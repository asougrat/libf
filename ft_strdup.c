/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:04:39 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/20 18:44:16 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

char  *ft_strdup(const char    *s1)
{
    char    *str;
    size_t    i;

    i = 0;
    str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
    if (!str)
        return (NULL);
    
    while (s1[i])
    {
        str [i] = s1[i];
        i++;
    }
    str[i] = 0;
    return (str);
}
/*
int main()
{
  char test[]="hello";
  printf("%s",ft_strdup(test));
  
}*/