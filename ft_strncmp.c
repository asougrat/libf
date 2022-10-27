/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asougrat <asougrat.>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:34:13 by asougrat          #+#    #+#             */
/*   Updated: 2022/10/07 17:33:30 by asougrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (!(s1[i] == s2[i]))
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char a[]="aabgg";
	char b[]="aaaid";
	printf("%d\n",ft_strncmp(a,b,3));
	printf("%d",strncmp(a,b,3));
}*/
