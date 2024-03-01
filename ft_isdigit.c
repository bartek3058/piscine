/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:24:03 by brogalsk          #+#    #+#             */
/*   Updated: 2024/03/01 11:29:04 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		if (!(a[i] >= 48 && a[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*int main ()
{
	char a[] = "1ia2";
	int b;
	b = ft_isdigit(a);
	printf ("%d", b);
	return (0);
}*/
