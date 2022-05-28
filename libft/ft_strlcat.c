/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:35:18 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/25 18:01:43 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t d)
{
	int		i;
	int		j;
	size_t	len_str;

	if (d == 0 || ft_strlen(dst) >= d) 
		return (d + ft_strlen(src));
	len_str = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	j = 0;
	while (dst[i] != '\0' && d--)
		i++;
	while (src[j] != '\0' && (size_t)j < d - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_str);
}
