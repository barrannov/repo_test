/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 19:48:07 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/09 19:59:54 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	while(lst)
	{
		tmp = f(lst);
		lst = lst->next;
	}
	return (lst);
}
