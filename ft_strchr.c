/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:05:35 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/29 10:28:44 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char *) s;
	*a = *s;
	i = 0;
	while (a[i] != c && a[i] != '\0')
		i++;
	if (a[i] == c)
		return (&a[i]);
	return (NULL);
}
/*int main()
{
	const char a[] = "abc123123:w";
	char b[] = "c";
	printf("%s\n", ft_strchr(a, *b));
	printf("%s\n", strchr(a, *b));
       return (0);
}*/
