/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 16:52:30 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/09 18:04:41 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list* res;

	res = (t_list*)malloc(content_size * sizeof(t_list));
	if (res == 0)
		return NULL;
	if (content == 0)
	{
		res->content = 0;
		res->content_size = content_size;
	}
	else 
	{
		res->content = ft_memalloc(content_size);
		res->content = ft_memcpy(res->content, content, content_size);
		res->content_size = content_size; 
		res->next = NULL; 
	}
	return (res);
}
