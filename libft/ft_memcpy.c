/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:55:35 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/22 18:40:47 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *d, const void *src, size_t n)
{
	unsigned char		*pd;
	unsigned const char	*ps;

	pd = (unsigned char *)d;
	ps = (unsigned const char *)src;
	while (n--)
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	return (d);
}
