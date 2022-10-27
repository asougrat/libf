/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:21:31 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/20 16:37:06 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dest, void *src, size_t len)
{
    size_t i;
    unsigned char *s;
    unsigned char *d;

    i=-1;
    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    
    if (src == dest)
        return(NULL);
        
    if (src > dest)
    {
        while (len > i++)
        {
            d[i]=s[i];
        }
    else{
        while (len)
        {
            d[len-1]=s[len-1];
            len--;
        }    
    }    

return(dest);    
}