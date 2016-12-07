/* ************************************************************************** */ 
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 17:29:19 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/01 20:09:45 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	while(n--)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		if(*(unsigned char *)src == (unsigned char)c)
			return(dst + 1);
		return(ft_memccpy(dst + 1, src + 1, c , n));
	}
	return(0);
}
