/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:46:26 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 12:47:39 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	else
		return (0);
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
		response = isascii(letter);
		response2 = ft_isascii (letter);
			printf("isascii response = %o\n", response);
			printf("ft_isascii response = %o\n\n", response2);

	letter = 'r';
		response = isascii(letter);
		response2 = ft_isascii (letter);
			printf("isascii response = %o\n", response);
			printf("ft_isascii response = %o\n\n", response2);

	letter = '?';
		response = isascii(letter);
		response2 = ft_isascii (letter);
			printf("isascii response = %o\n", response);
			printf("ft_isascii response = %o\n\n", response2);

	letter = '*';
		response = isascii(letter);
		response2 = ft_isascii (letter);
			printf("isascii response = %o\n", response);
			printf("ft_isascii response = %o\n\n", response2);

} */
/* ASCII is between octal 0 to 0177 (= decimal 0 to 127)*/