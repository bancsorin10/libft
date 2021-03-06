/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbanc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 13:17:34 by sbanc             #+#    #+#             */
/*   Updated: 2017/01/06 12:16:38 by sbanc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if ((lst != NULL) && (f != NULL))
	{
		while (lst)
		{
			(*f)(lst);
			lst = lst->next;
		}
	}
}
