/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:38:56 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/18 17:19:47 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t l)
{
	size_t	lns;
	char	*str;
	char	*ptr;
	size_t	j;

	str = (char *)s;
	j = 0;
	lns = ft_strlen(str);
	if (start > lns || l == 0)
		j = 0;
	else if (lns - start + 1 > l)
		j = l;
	else
		j = lns - start;
	ptr = (char *)malloc((1 + j));
	if (!ptr)
		return (0);
	lns = 0;
	while (str[start] && lns < j)
		ptr[lns++] = str[start++];
	ptr[lns] = '\0';
	return (ptr);
}
