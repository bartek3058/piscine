/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:04:14 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/29 09:36:34 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (dst[i] != '\0')
		i++;
	while (src[a] && i - 1 < size)
	{
		dst[i] = src[a];
		i++;
		a++;
	}
	dst[i] = '\0';
	if (i > size)
		i--;
	return (i);
}
/*int main()
{
	char a[] = "Ola";
	char b[] = " ma kota";
	size_t c = 20;
	printf ("%ld", ft_strlcat(a, b, c));
	return (0);
}*/
