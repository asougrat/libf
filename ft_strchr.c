/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:50:10 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/14 13:00:13 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
   int i;
   
   i = 0;
   
    while (str[i])
    {
        if (str[i] == (unsigned char)c)
            return ((char *)(str+i));
            i++;
    }
        if ((str[i] == (unsigned char)c))
            return ((char *)(str+i));
            return(NULL);
}

/*the difrenece between strchr & strrchr 
is the first begin print from the beginin of char 
& the second begin print from the last

int main () 
{
        char test[20]="ahmed soldan";
    printf("%s\n",ft_strchr(test,'d'));
}*/
