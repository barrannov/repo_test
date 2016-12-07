/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaranov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:32:57 by abaranov          #+#    #+#             */
/*   Updated: 2016/12/01 20:11:40 by abaranov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		atoi_garbage(char *str, int count, int flag)
{
	if (str[count] == '+' && flag)
	{
		count++;
		flag = 0;
	}
	if (str[count] == '+' && flag != 1)
		return (-1);
	if (str[count] == '-' && flag != 1)
		return (-1);
	return (count);
}

int		ft_atoi(char *str)
{
	int count;
	int mem;
	int flag;

	mem = 0;
	count = 0;
	flag = 1;
	while (str[count] < 33)
		count++;
	if (str[count] == '-')
	{
		count++;
		flag = -1;
	}
	if (atoi_garbage(str, count, flag) != -1)
		count = atoi_garbage(str, count, flag);
	while (str[count] <= '9' && str[count] >= '0')
	{
		mem *= 10;
		mem += (str[count++] - '0');
	}
	if (flag >= 0)
		return (mem);
	return (-mem);
}
