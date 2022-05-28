/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:50:22 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/21 19:09:31 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *h, const char *n, size_t l)
{
	size_t	i;
	size_t	j;
	char	*a;
	char	*b;

	a = (char *)h;
	b = (char *)n;
	i = 0;
	if (b[0] == '\0')
		return (a);
	j = 0;
	while (a[i] != '\0' && i < l)
	{
		j = 0;
		while (a[i + j] == b[j] && i + j < l)
		{
			if (b[j + 1] == '\0')
				return (a + i);
			j++;
		}
		i++;
	}
	return (0);
}
