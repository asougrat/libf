/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:58:33 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/20 16:44:46 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void    *str;
    int i;
    
    i = 0;
    
    str = malloc(count * size);
    if (!str)
        return (NULL);
    while ((char *)str && i < count * size)
        ((char *)str)[i++] = 0;
    return (str);
}
/*
int main(void){
    char *s;
    s = ft_calloc(10, 1);
    s[0] = '1';
    printf("%c\n", s[0]);
}*/