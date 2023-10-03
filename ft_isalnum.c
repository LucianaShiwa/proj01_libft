/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:44:19 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 12:44:56 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	int	c;
	unsigned char	response;
	unsigned char	response2;
	
	c = 'A';
		response = isalnum(c);
		response2 = ft_isalnum(c);
			printf("isalnum response = %d\n", response);
			printf("ft_isalnum response = %d\n\n", response2);

	c = 'a';
		response = isalnum(c);
		response2 = ft_isalnum(c);
			printf("isalnum response = %d\n", response);
			printf("ft_isalnum response = %d\n\n", response2);

	c = '?';
		response = isalnum(c);
		response2 = ft_isalnum(c);
			printf("isalnum response = %d\n", response);
			printf("ft_isalnum response = %d\n\n", response2);
	
	c = '*';
		response = isalnum(c);
		response2 = ft_isalnum (c);
			printf("isalnum response = %d\n", response);
			printf("ft_isalnum response = %d\n\n", response2);

	c = 8;
		response = isalnum(c);
		response2 = ft_isalnum(c);
			printf("isalnum response = %d\n", response);
			printf("ft_isalnum response = %d\n\n", response2);
	
	c = '8';
		response = isalnum(c);
		response2 = ft_isalnum(c);
			printf("isalnum response = %d\n", response);
			printf("ft_isalnum response = %d\n\n", response2);
} */
