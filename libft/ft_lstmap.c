/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:07:54 by amsryan           #+#    #+#             */
/*   Updated: 2022/03/26 12:21:03 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	int		i;

	i = 0;
	a = NULL;
	if (f && lst)
	{
		while (lst)
		{
			a = ft_lstnew(lst);
			a = f(lst->content);
			a = a->next;
			lst = lst->next;
		}
	}
	if (!f)
	{
		del(lst->content);
		free (lst);
		return (NULL);
	}
	return (a);
}
