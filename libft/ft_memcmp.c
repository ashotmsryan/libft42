/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:58:24 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/16 19:37:40 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*k;
	const unsigned char	*j;

	k = s1;
	j = s2;
	i = 0;
	while (i < n)
	{
		if (k[i] > j[i])
			return (k[i] - j[i]);
		else if (k[i] < j[i])
			return (k[i] - j[i]);
		i++;
	}
	return (0);
}
