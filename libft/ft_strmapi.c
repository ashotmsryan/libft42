/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:35:42 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/21 17:38:45 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		j;
	char	*a;

	j = 0;
	if (!s || !f)
		return (0);
	a = (char *)malloc(ft_strlen(s) + 1);
	if (!a)
		return (0);
	while (s[j])
	{
		a[j] = f(j, s[j]);
		j++;
	}
	a[j] = '\0';
	return (a);
}
