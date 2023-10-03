/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:17:25 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/28 16:17:28 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_digits(int n)
{
	int	count_digits;

	count_digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count_digits++;
		n = n / 10;
	}
	return (count_digits);
}

static char	*put_num(char *num_ascii, int digits, int n)
{
	num_ascii[digits] = '\0';
	if (n < 0)
	{
		n *= -1;
		while (digits > 0)
		{
			digits--;
			num_ascii[digits] = n % 10 + '0';
			n = n / 10;
		}
		num_ascii[digits] = '-';
		return (num_ascii);
	}
	else
	{
		while (digits > 0)
		{
			digits--;
			num_ascii[digits] = n % 10 + '0';
			n = n / 10;
		}
		return (num_ascii);
	}
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*num_ascii;

	digits = 0;
	if (n >= -2147483648 && n <= 2147483647)
	{
		digits = get_num_digits(n);
		if (n < 0)
			digits += 1;
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		if (n == 0)
			return (ft_strdup("0"));
		num_ascii = (char *)malloc(sizeof(char) * digits + 1);
		if (num_ascii == NULL)
			return (NULL);
		num_ascii = put_num(num_ascii, digits, n);
		return (num_ascii);
	}
	return (0);
}
/*

#include <stdio.h>

int	main()
{
	printf("\n--00-------------------------\n");

	int n = -2147483648;  //min int
	char *result = ft_itoa(n);
		printf("\nmain n:%d, result ft_itoa:%s\n", n, result);
	free (result);

	printf("\n--01-------------------------\n");

	int n1 = 2147483647; //max int
	char *result1 = ft_itoa(n1);
		printf("\nmain n:%d, result ft_itoa:%s\n\n", n1, result1);
	free (result1);

	printf("--02-------------------------\n");

	int n2 = -9;
	char *result2 = ft_itoa(n2);
		printf("\nmain n:%d, result ft_itoa:%s\n\n", n2, result2);
	free (result2);

	printf("--03-------------------------\n");

	int n3 = 9;
	char *result3 = ft_itoa(n3);
		printf("\nmain n:%d, result ft_itoa:%s\n\n", n3, result3);
	free (result3);

	printf("--04-------------------------\n");

	int n4 = 42;
	char *result4 = ft_itoa(n4);
			printf("\nmain n:%d, result ft_itoa:%s\n\n", n4, result4);
	free (result4);

	printf("--05-------------------------\n");

	int n5 = -623;
	char *result5 = ft_itoa(n5); //expected: 0 --> sai: null
		printf("\nmain n:%d, result ft_itoa:%s\n\n", n5, result5);
	free (result5);

	printf("--06-------------------------\n");

	int n6 = 0;
	char *result6 = ft_itoa(n6); //expected: 
		printf("\nmain n:%d, result ft_itoa:%s\n\n", n6, result6);
	free (result6);

	printf("--07-------------------------\n");

	int n7 = -0;
	char *result7 = ft_itoa(n7);
		printf("\nmain n:%d, result ft_itoa:%s\n\n", n7, result7);
	free (result7);

	printf("---------------------------\n");
} */
//
// n: el entero a convertir.
// result: La string que represente el número.
// 		NULL si falla la reserva de memoria.
// 		malloc
// Utilizando malloc(3), genera una string que
// represente el valor entero recibido como argumento.
// Los números negativos tienen que gestionarse.