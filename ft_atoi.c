/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:00:21 by brogalsk          #+#    #+#             */
/*   Updated: 2024/03/01 10:16:05 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	c;
	int	d;

	i = 0;
	c = 1;
	d = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
	{
		c = -1;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		d = d * 10 + (nptr[i] - '0');
		i++;
	}
	return (c * d);
}
/*int main()
{
	int c;
	c = atoi("\t \n- -123");
	printf("%d\n", c);
	printf("%d\n", ft_atoi("\t  \n- -123"));
	return (0);
}*/
