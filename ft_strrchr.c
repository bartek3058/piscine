/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:29:15 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/29 10:47:02 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	int		i;

	a = (char *) s;
	i = 0;
	while (a[i] != '\0')
		i++;
	while (i > 0 && a[i] != c)
		i--;
	if (a[i] == c)
		return (&a[i]);
	return (NULL);
}
/*int main()
{
	char a[] = "2345678923456789";
	char b[] = "2";
	printf ("%s\n", ft_strrchr(a, *b));
	printf ("%s\n", strrchr(a, *b));
	return (0);
}*/
