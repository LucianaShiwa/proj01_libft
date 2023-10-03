/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:51:36 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 12:51:42 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
	unsigned char letter;
	unsigned char response;
	unsigned char response2;
	
	letter = 'A';
	response = tolower(letter);
	response2 = ft_tolower (letter);
		printf("tolower response = %c\n", response);
		printf("ft_tolower response = %c\n\n", response2);

	letter = 'W';
		response = tolower(letter);
		response2 = ft_tolower (letter);
			printf("tolower response = %c\n", response);
			printf("ft_tolower response = %c\n\n", response2);

		letter = 'r';
	response = tolower(letter);
	response2 = ft_tolower (letter);
		printf("tolower response = %c\n", response);
		printf("ft_tolower response = %c\n\n", response2);

		letter = '7';
	response = tolower(letter);
	response2 = ft_tolower (letter);
		printf("tolower response = %c\n", response);
		printf("ft_tolower response = %c\n\n", response2);
} */