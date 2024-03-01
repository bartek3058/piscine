/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:48:58 by brogalsk          #+#    #+#             */
/*   Updated: 2024/03/01 09:59:10 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = c;
		n--;
		p++;
	}
	return (s);
}
/*int main()
{
	char *h;
	char a[] = "ccupa";
	h = ft_memset(a, 'd', 2);
	printf("%p\n", memset(a, 'd', 3));
	printf("%p", ft_memset(a, 'd', 3));
	return (0);
}*/
