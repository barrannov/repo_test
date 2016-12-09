/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:39:49 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/07 15:15:51 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int amount_d(int n)
{	
	int i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int min(int n)
{
	if(n < 0)
		n = -n;
	return (n);
}

char * ft_itoa(int n)
{
	char *res;
	int len;
	unsigned int num;
	
	len = 0;
	len = amount_d(n);
	num = min(n);
	if(!(res = (char *)malloc(sizeof(*res) * (len + 1))))
		return (0);
	res[len--] = '\0';
	while(len >= 0)
	{
		res[len--] = num % 10 + 48;
		num = num / 10;
	}	
	if (n < 0)
		res[0] = '-';
	return (res);
}

/*int main()
{
	printf("%s", ft_itoa(-0));
	return (0);
}*/
