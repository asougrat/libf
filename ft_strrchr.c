/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:55:21 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/14 12:59:13 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(char *s,int c)
{
    char *str;
    
    str = NULL;
    
    while (*s != '\0')
    {
        if(*s == c)
        str = (char *)s;
        s++;
    }
    if (c == '\0')
    {
        return((char *)s);
    }
    return(str);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*the difrenece between strchr & strrchr 
is the first begin print from the beginin of char 
& the second begin print from the last*/
int main()
{
    char test[20]="ahmed seltan";
    printf("%s",ft_strrchr(test,'e'));
}