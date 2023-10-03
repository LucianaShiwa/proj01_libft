/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:05:21 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/25 16:05:36 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	pointer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (pointer[i] == (unsigned char)c)
			return ((void *)&pointer[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	unsigned char	*result1;
	unsigned char	*result2;
	size_t			n1;

	n1 = 17;
	unsigned char string1 [17] = "Hola Todo Bienn?";
	int c1 = 'l';

			result1 = memchr(string1, c1, n1);
					printf("memchr = %p\n", result1);
			result2 = ft_memchr(string1, c1, n1);
					printf("ft_memchr = %p\n", result2);
}
*/
// The memchr() function locates the first occurrence 
// of c (converted to an unsigned char) in string s.
// memchr – locate byte in byte string
//Unlike strchr, memchr does not stop when it hits a null character, 
//which is why it requires a length parameter
// RETURN VALUES
//      The memchr() function returns a pointer to the byte located, or NULL if
//      no such byte exists within n bytes.