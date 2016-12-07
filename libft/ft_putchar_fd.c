/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 15:31:04 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/06 15:31:48 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
