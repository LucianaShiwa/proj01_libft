/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:57:34 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 18:57:44 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//writes len bytes of value c (converted to an unsigned char) to the string b.
//The memset() function returns its first argument.
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pointer;

	i = 0;
	pointer = (unsigned char *)b;
	while (i < len)
	{
		pointer[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
 #include <string.h>
 #include <stdio.h>

int main()
{
	unsigned char c;
	size_t n;
	
	char pointer[10];

	c = 'H';
	n = 7;

	ft_memset(pointer, c, n); //void *memset(void *str, int c, size_t n)
		printf("ft_pointer[c] = %s, c= %c, n=%zu\n", pointer, c, n);
	memset(pointer, c, n);
		printf("pointer[c] = %s, c= %c, n=%zu", pointer, c, n);
	return (0);
} */
/*
memset -- fill a byte string with a byte value
copies the character c (an unsigned char) to the first n characters
 of the string pointed to, by the argument str.

void *memset(void *b, int c, size_t len);

DESCRIPTION
    The memset() function writes len bytes of value c (converted to 
	an unsigned char) to the string b.
RETURN VALUES
    The memset() function returns its first argument. 
	== This function returns a pointer to the memory area str.
Parameters
	str − This is a pointer to the block of memory to fill.
	c − This is the value to be set. The value is passed as an int,
	 but the function fills the block of memory using the 
	 unsigned char conversion of this value.
	n − This is the number of bytes to be set to the value.

while (i < len)  //menor y no igual a len pq no queremos borrar el \0.
*/