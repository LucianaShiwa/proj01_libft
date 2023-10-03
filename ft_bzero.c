/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:57:00 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 18:57:10 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The bzero() function writes n zeroed bytes to the string s.  
// If n is zero, bzero() does nothing.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <strings.h>
#include <stdio.h>

int main ()
{
	size_t n;
	char p[6] = "Hello";

	n = 5;
	bzero(p, n); //bzero(void *s, size_t n)
		printf("\npointer bzero p= %s, n= %zu\n", p, n);
	ft_bzero(p, n);
		printf("pointer ft_bzero p= %s, n= %zu\n ", p, n);
} */
//
//void	*ft_memset(void *b, int c, size_t len)