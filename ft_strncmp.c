/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:47:51 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/29 11:15:26 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*p1;
	char	*p2;
	size_t	a;

	p1 = (char *) s1;
	p2 = (char *) s2;
	a = 0;
	while (*p1 && *p2 && a < n)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		a++;
	}
	return (*p1 - *p2);
}
/*int main()
{
	char a[] = "abcd";
	char b[] = "abc";
	printf ("%d\n", ft_strncmp(a, b, 1));
	printf ("%d\n", ft_strncmp(a, b, 1));
	return (0);
}*/
