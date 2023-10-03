/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:28:44 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/18 21:28:47 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//memmove -- copy byte string
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	if ((dst == NULL) && (src == NULL) && len)
		return (NULL);
	else if (src < dst)
	{
		while (len != 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
//function copies len bytes from string src to string dst.
//The two strings may overlap; 
//the copy is always done in a non-destructive manner.
// else if (src < dst) ---> overlaping! copy in reverse.
// else --> (src > dst)
/*
#include <string.h>
#include <stdio.h>

int main ()
{
	unsigned char *response;
	unsigned char *response2;
	size_t destsize_lu;
	size_t destsize_lu2;

	printf("\n================================\n");

	destsize_lu = 6;
	unsigned char dest_lu[6] = "-----"; 
	unsigned char src_lu[6] = "copia";
		
			printf("\nft_memmove: dest = %s, src = %s\n", dest_lu, src_lu);
		response = ft_memmove(dest_lu, src_lu, destsize_lu); 
			printf("\nresponse ft_memmove = %s, dest = %s, src = %s, \
					destsize_lu = %zu\n",response, dest_lu, src_lu, destsize_lu);
	
	printf("================================\n");

	destsize_lu2 = 6;
	char dest_lu2[6] = "-----";
	const char src_lu2[6] = "copia";

			printf("strlcat: dest = %s, src = %s\n\n", dest_lu2, src_lu2);
		response2 = memmove(dest_lu2, src_lu2, destsize_lu2); 
			printf("response strlcat = %s, dest = %s, src = %s, \
					destsize_lu2 = %zu\n\n", response2, dest_lu2, src_lu2, \
					destsize_lu2);
	printf("================================\n");
} */