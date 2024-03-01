/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:02:30 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/27 13:10:08 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		a++;
		b++;
	}
	return (b);
}
/*int main ()
{
	char a[] = "a5333\nbc";
	int b;

	b = 0;
	b = ft_strlen(a);
	printf("%d", b);
	return (0);
}*/
