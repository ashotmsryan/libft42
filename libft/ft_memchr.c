/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:18:35 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/24 15:35:13 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*k;

	k = (char *)s;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (k[i] == (char)c)
			return (&k[i]);
		i++;
	}
	return (0);
}
