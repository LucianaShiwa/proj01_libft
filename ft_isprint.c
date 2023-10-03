/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:49:14 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 12:49:32 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* decimal */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
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
		response = isprint(letter);
		response2 = ft_isprint (letter);
			printf("isprint response = %o\n", response);
			printf("ft_isprint response = %o\n\n", response2);

	letter = 'r';
		response = isprint(letter);
		response2 = ft_isprint (letter);
			printf("isprint response = %o\n", response);
			printf("ft_isprint response = %o\n\n", response2);

	letter = '~';
		response = isprint(letter);
		response2 = ft_isprint (letter);
			printf("isprint response = %o\n", response);
			printf("ft_isprint response = %o\n\n", response2);

	letter = '*';
		response = isprint(letter);
		response2 = ft_isprint (letter);
			printf("isprint response = %o\n", response);
			printf("ft_isprint response = %o\n\n", response2);
} */