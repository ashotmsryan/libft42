/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:14:23 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/22 19:55:39 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof (t_list));
	a -> content = content;
	a -> next = NULL;
	return (a);
}
