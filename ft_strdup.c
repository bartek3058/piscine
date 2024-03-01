/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:16:38 by brogalsk          #+#    #+#             */
/*   Updated: 2024/03/01 12:34:11 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        char            *dest_ptr;
        const char      *src_ptr;

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

int     ft_strlen(char *s)
{
        int	a;
        size_t	b;

        a = 0;
        b = 0;
        while (s[a] != '\0')
        {
                a++;
                b++;
        }
        return (b);
}

char	*strdup (const char *s)
{
	size_t 	len;
	char	*dst;

	if (*s == '\0')
		return (NULL);
	len = ft_strlen(s);
	dst = malloc(len) + 1;
	if (dst != NULL)
		return (ft_memcpy(dst, s, len));
	return (dst);
}
