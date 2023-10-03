/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:52:13 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 12:52:19 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
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
		response = toupper(letter);
		response2 = ft_toupper (letter);
			printf("toupperto response = %c\n", response);
			printf("ft_toupper response = %c\n\n", response2);

	letter = 'r';
		response = toupper(letter);
		response2 = ft_toupper (letter);
			printf("tolower response = %c\n", response);
			printf("ft_toupper response = %c\n\n", response2);

	letter = 'u';
		response = toupper(letter);
		response2 = ft_toupper (letter);
			printf("tolower response = %c\n", response);
			printf("ft_toupper response = %c\n\n", response2);

	letter = '7';
		response = toupper(letter);
		response2 = ft_toupper (letter);
			printf("toupper response = %c\n", response);
			printf("ft_toupper response = %c\n\n", response2);
} */