/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:21:44 by brogalsk          #+#    #+#             */
/*   Updated: 2024/03/01 10:15:30 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d = (char*) dest;
	const char *s = (const char*) src;
	if (dest == src)
		return (dest);
	if (src > dest)
	{
		while (n > 0)
		{


}

/*int main ()
{
	char a[] = "abc";
	char b[] = "O1ll";
	//char *c;
	char *d;
	//c = ft_memmove(a, b, 1);
	d = memmove(a, b, 5);
	//printf("%s\n", c);
	printf("%s\n", d);
	return (0);
}*/
