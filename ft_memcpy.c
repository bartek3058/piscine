/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:53:42 by brogalsk          #+#    #+#             */
/*   Updated: 2024/02/28 18:04:22 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = dest;
	src_ptr = src;
	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
	return (dest);
}

/*int main ()
{
	char dest[] = "354";
	char src[] = "ad34";
	char *d;
	char *c;
	d = ft_memcpy(dest, src, 2);
	c = memcpy(dest, src, 2);
	printf("%s\n", d);
	printf("%s\n", c);
	return (0);
}*/
