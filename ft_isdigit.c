/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:48:26 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 12:48:40 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
    int num;
    int response;
    int response2;

	num = 'A';
    response = isdigit (num);
    response2 = ft_isdigit (num);
        printf("response isdigit = %d\n", response);
        printf("response ft_isdigit = %d\n", response2);

    num = '0';
        response = isdigit (num);
        response2 = ft_isdigit (num);
            printf("response isdigit = %d\n", response);
            printf("response ft_isdigit = %d\n", response2);


	num = '?';
    response = isdigit (num);
    response2 = ft_isdigit (num);
        printf("response isdigit = %d\n", response);
        printf("response ft_isdigit = %d\n", response2);

	num = '+';
    response = isdigit (num);
    response2 = ft_isdigit (num);
        printf("response isdigit = %d\n", response);
        printf("response ft_isdigit = %d\n", response2);
} */