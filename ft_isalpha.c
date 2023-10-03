/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:45:24 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 12:45:59 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	int	c;
	unsigned char	response;
	unsigned char	response2;

	c = 'A';
	response = isalpha(c);
	response2 = ft_isalpha(c);
		 printf("response isalpha = %d, c= %d\n", response, c);
		 printf("response ft_isalpha = %d\n\n", response2);

	c = 'a';
	response = isalpha(c);
	response2 = ft_isalpha(c);
		 printf("response isalpha = %d\n", response);
		 printf("response ft_isalpha = %d\n\n", response2);

	c = '?';
	response = isalpha(c);
	response2 = ft_isalpha(c);
		 printf("response isalpha = %d\n", response);
		 printf("response ft_isalpha = %d\n\n", response2);

	c = '*';
	response = isalpha(c);
	response2 = ft_isalpha(c);
		 printf("response isalpha = %d\n", response);
		 printf("response ft_isalpha = %d\n\n", response2);

	c = 0;
	response = isalpha(c);
	response2 = ft_isalpha(c);
		 printf("response isalpha = %d\n", response);
		 printf("response ft_isalpha = %d\n\n", response2);

	c = -4;
	response = isalpha(c);
	response2 = ft_isalpha(c);
		 printf("response isalpha = %d\n", response);
		 printf("response ft_isalpha = %d\n\n", response2);
}
*/
// The value of the argument must be representable as an unsigned char