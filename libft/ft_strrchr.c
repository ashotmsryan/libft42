/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:19:08 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/28 17:04:51 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*k;
	char	l;

	l = c;
	k = (char *)s;
	i = 0;
	while (k[i] != '\0')
		i++;
	while (k[i] != k[0] && k[i] != l)
		i--;
	if (k[i] != l)
		return (0);
	if (k[i] == l)
	{
		return (&k[i]);
	}
	return (0);
}/*
int main()
{
	char *s = "asdfgh";
	int		c = 'h';
	char	*k = ft_strrchr(s, c);
	printf("%s", k);

}*/	
