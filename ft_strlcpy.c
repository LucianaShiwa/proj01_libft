/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:16:08 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 17:16:35 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
//	NUL-terminating the result if dstsize is not 0.
//copies a string from src to dst up to a maximum of dstsize characters.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srcsize);
	if (dstsize > 0)
	{
		while ((i < dstsize - 1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
#include <string.h>
#include <stdio.h>

int main( )
{
	char dest[22] = "Bom";		 //dst (destino) 
	const char src[22] = "Dia"; //src (source) 
	size_t destsize; 			// (tamanho destino)
	size_t result;
	size_t result2;
	size_t result3;
	size_t result4;

	destsize = 4;
		printf("\nImput strlcpy:\n");
		printf("dest= %s, src= %s, destsize= %zu.\n\n", dest, src, destsize);

	result = strlcpy(dest, src, destsize); 
	result2 = ft_strlcpy(dest, src, destsize); 
		printf("Out strlcpy: res:srcsize= %zu, dest= %s\n", result, dest);
		printf("Out ft_strlcpy: res:srcsize=%zu, dest=%s\n\n", result2, dest);

	result3 = strlcpy(dest, "have a good day Luci!", 22); 
		printf("Out strlcpy: result srcsize= %zu, dest= %s\n", result3, dest);
	result4 = ft_strlcpy(dest, "have a good day Luci!", 22); 
		printf("Out ft_strlcpy: res:srcsize=%zu, dest=%s\n\n", result3, dest);

	return (0);
} */
//
//functions return the total length of the string they tried to create.
//meaning: It returns the size of the source string, 
//regardless of how many characters are actually copied.
//that`s why when I use "i", it gives me back error.