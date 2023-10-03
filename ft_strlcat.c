/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:04:30 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 17:04:46 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;
	size_t	dstlen;

	srcsize = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + srcsize);
	i = 0;
	while ((dstlen + 1 < dstsize) && (src[i] != '\0'))
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (dstlen + (srcsize - i));
}
/*
#include <string.h>
#include <stdio.h>

int main ()
{
	size_t destsize_lu;
	size_t response;
	size_t response2;
	
	destsize_lu = 8; // destsize_lu e dest_lu deveriam ter o mesmo tamanho
	char dest_lu[8] = "Hello"; // garantir que dest_lu seja >= src_lu (size)
	const char src_lu[6] = "world";

		printf("================================\n");
	response = ft_strlcat(dest_lu, src_lu, destsize_lu); 
		printf("\nresponse ft_strlcat = %zu, dest = %s, src = %s, \
				destsize = %zu\n",response, dest_lu, src_lu, destsize_lu);
	size_t destsize_lu2;
	destsize_lu2 = 8; // até 6 funciona, qdo uso 7 dá illegalinstruction.
	char dest_lu2[8] = "Hello";
	const char src_lu2[6] = "world";
	response2 = strlcat(dest_lu2, src_lu2, destsize_lu2); 
		printf("response strlcat = %zu, dest = %s, src = %s, \
				destsize = %zu\n\n", response2, dest_lu2, src_lu2, destsize_lu2);
		printf("\n================================\n");
} */
//
//return (dstlen + (srcsize - i)); 
// = lenght of what I want to copy (dstlen) + 
//   what remains of srcsize because it couldn`t fit at the destsize to copy
//  --> SO, I do: (srcsize - i) because the ft_strlen only returns the 
//		size (length) without the \0, then I add 1 at it.