/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:09:44 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/20 15:11:54 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ftstrnstr (const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    
    i=0;
    
    if(!(*little))
    return((char *)big);//If little is an empty string, big is returned;
    
    while(big[i]!='\0'&& i<len)
    {
        if(little[i]==big[0])
        {
            j=0;
        while(big[i+j]==little[j] && i + j < len)
            if(little[j++ +1]=='\0')
                return ((char *)(big +i));
        }
        i++;
    }
    return(0);
}
