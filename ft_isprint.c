/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:40:19 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/27 12:51:24 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!(s[i] >= 32 && s[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*int main ()
{
	char a[] = "ab\nc";
	int	b;

	b = ft_isprint(a);
	printf("%d", b);
	return (0);
}*/
