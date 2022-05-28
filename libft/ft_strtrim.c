/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:28:26 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/18 19:07:09 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, const char *set)
{
	size_t	i; 
	size_t	j;
	char	*s;
	size_t	g;

	i = 0;
	j = 0;
	while (s1[i])
	{	
		if (ft_strchr(set, s1[i]) != 0)
			i++;
		else
			break ;
	}
	g = ft_strlen(s1);
	while (g != 0)
	{
		if (ft_strchr(set, s1[g]) != 0)
			g--;
		else
			break ;
	}
	s = ft_substr(s1, i, g - i + 1);
	return (s);
}
