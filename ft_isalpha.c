/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:00:19 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/27 11:21:33 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		if (!((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}
/*int main ()
{
	char a[] = "ab0c";
	int b;
	b = ft_isalpha(a);
	printf("%d", b);
	return (0);
}*/
