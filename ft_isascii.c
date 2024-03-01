/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:31:29 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/27 12:36:19 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(char *s)
{
	int	i;

	while (s[i] != '\0')
	{
		if (!(s[i] > 0 && s[i] < 127))
			return (0);
		i++;
	}
	return (1);
}

/*int main ()
{
	char a[] = "ab`c";
	int b;

	b = ft_isascii(a);
	printf("%d", b);
	return (0);
}*/
