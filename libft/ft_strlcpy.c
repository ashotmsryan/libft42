/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:41:37 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/10 18:33:18 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t d)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
	{	
		i++;
	}
	j = i;
	i = 0;
	if (d < 1)
		return (j);
	while (src[i] != '\0' && i < d - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
