/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:19:41 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/25 17:45:04 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// calloc – memory allocation
// function contiguously allocates enough space for count
//      objects that are size bytes of memory each
void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;
	size_t	i;
	size_t	totalmemory;

	totalmemory = count * size;
	pointer = malloc(totalmemory);
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (i < totalmemory)
	{
		pointer[i] = 0;
		i++;
	}
	return ((void *)pointer);
}
// count = countofInts;
// size = sizeofInt
/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
		printf ("\n(10, 8):\n");
	int *result = calloc(10, 8);
	int *result2 = ft_calloc(10, 8);
		printf ("    calloc = %p\n ft_calloc = %p\n\n", result , result2);
	
	//int	ft_memcmp(const void *s1, const void *s2, size_t n);
	int result3 = ft_memcmp(result, result2, 8); 
	printf ("  calloc = ft_calloc ? %d\n\n", result3);
	//Siempre liberar la memoria
	free(result);
	free(result2);

	// 	printf ("(0, 0):\n");
	// int *result4 = calloc(0, 0);
	// int *result5 = ft_calloc(0, 0);
	// 	printf ("    calloc = %p\n ft_calloc = %p\n\n", result4 , result5);
	
	//int	ft_memcmp(const void *s1, const void *s2, size_t n);
	// int *result6 = ft_memcmp(*result4, *result5, 8); 
	// 	printf ("  calloc = ft_calloc ? %d\n\n", result6);
} */