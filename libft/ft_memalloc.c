/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 11:15:24 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/02 17:04:51 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{	
	size_t i;

	i = 0;
	void *result = malloc(size);
	if(result == 0)
		 return 0;
	while(i < size)
	{
		*((unsigned char*)result + i) = 0;
		i++;
	}
	 *((unsigned char*)result + i) = '\0';
	return result;
}
