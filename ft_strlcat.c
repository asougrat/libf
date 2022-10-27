/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:44:35 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/19 17:59:54 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



size_t ft_strlcat(char *dst, const char *src, size_t size)
{ 
    size_t  d;
    size_t srrc;
    size_t dsst;
    
    dsst = ft_strlen(dst);
    srrc = ft_strlen(src);
    d=dsst;
    
    if(dsst >= size || !size)
        return(size+srrc);
    
    while (*src &&  dsst<size -1)
    {
        dst[dsst]=*src;
        dsst++;
        src++;
    }
    dst[dsst]='\0';
    return(d+srrc);
}

