/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:32:21 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/27 11:45:46 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		if (!((a[i] >= 48 && a[i] <= 57)
				|| (a[i] >= 65 && a[i] <= 90)
				|| (a[i] >= 97 && a[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}

/*int main ()
{
	char a[] = "ab09c";
	int	b;
	b = ft_isalnum(a);
	printf("%d", b);
	return (0);
}*/
