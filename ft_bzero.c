/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:22:12 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/28 08:49:31 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, unsigned int n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		p = '\0';
		n--;
		p++;
	}
}

/*int main ()
{
	char a[] = "abc";
	ft_bzero(a, 2);
	return (0);
}*/
