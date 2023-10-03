/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:41:20 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/18 20:41:23 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//memcpy -- copy memory area
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*copy_dst;
	unsigned char	*copy_src;

	copy_dst = (unsigned char *)dst;
	copy_src = (unsigned char *)src;
	if (dst == NULL && src == NULL && n)
		return (NULL);
	i = 0;
	while (i < n)
	{
		copy_dst[i] = copy_src[i];
		i++;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	unsigned char *response;
	unsigned char *response2;
	size_t n1;
	size_t n2;

	printf("\n================================\n");

	n1 = 6;
	unsigned char dest_lu[6] = "Hello"; 
	unsigned char src_lu[6] = "copia";
		
			printf("\nft_memcpy: dest = %s, src = %s\n", dest_lu, src_lu);
		response = ft_memcpy(dest_lu, src_lu, n1); 
			printf("\nresponse ft_memcpy: = %s, dest = %s, src = %s, \
					n1 = %zu\n",response, dest_lu, src_lu, n1);
	
	printf("================================\n");

	n2 = 6;
	char dest_lu2[6] = "Hello";
	const char src_lu2[6] = "copia";

			printf("memcpy:: dest = %s, src = %s\n\n", dest_lu2, src_lu2);
		response2 = memcpy(dest_lu2, src_lu2, n2); 
			printf("response memcpy = %s, dest = %s, src = %s, \
					n2 = %zu\n\n", response2, dest_lu2, src_lu2, \
					n2);
	printf("================================\n");
} */
// The memcpy() function copies n bytes from memory area src to memory area dst.
//If dst and src overlap, behavior is undefined.  Applications in which dst 
//and src might overlap should use memmove(3) instead.
//RETURN VALUES
//  The memcpy() function returns the original value of dst.
// memset nao para com barra zero! considera ele como character.