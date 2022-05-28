/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:18:44 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/25 17:48:52 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int i, size_t n)
{
	size_t	j;
	char	*p;

	p = (char *)str;
	if (!str)
		return (NULL);
	j = 0;
	while (j < n)
	{
		p[j] = i;
		j++;
	}
	return (str);
}
