/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:58:33 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/29 14:01:34 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*dst;
	size_t		i;

	dst = (const char *) s;
	i = 0;
	while (dst[i] != '\0' && i < n)
	{
		if (dst[i] == c)
		{
			return ((void *)&dst[i]);
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
	char a[] = "abc123123";
	char b[] = "$";
	void *c;
	void *d;
	
	d = ft_memchr(a, *b, 2);
	c = memchr(a, *b, 2);
	char *c_c = (char *) c;
	char *d_d = (char *) d;
	printf("%s\n", c_c);
	printf("%s\n", d_d);
	return (0);
}*/
