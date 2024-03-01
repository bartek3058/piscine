/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:09:52 by brogalsk          #+#    #+#             */
/*   Updated: 2024/03/01 10:14:29 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s_s1;
	const char	*s_s2;
	size_t		i;

	s_s1 = (const char *) s1;
	s_s2 = (const char *) s2;
	i = 0;
	while (*s_s1 && *s_s2 && i < n - 1)
	{
		if (*s_s1 != *s_s2)
			return (*s_s1 - *s_s2);
		s_s1++;
		s_s2++;
		i++;
	}
	return (*s_s1 - *s_s2);
}

/*int main()
{
	char a[] = "abc123123";
	char b[] = "abc";
	int c;
	int d;

	d = ft_memcmp(a, b, 10);
	c = memcmp(a, b, 10);
	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
}*/
