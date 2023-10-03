/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:50:07 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 12:50:14 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	int response;
	int response2;

	response = ft_strlen("Hello");
	response2 = strlen("Hello");
		printf("response = %d\n", response);
		printf("response2 = %d\n", response2);
	
	response = ft_strlen("");
	response2 = strlen("");
		printf("response = %d\n", response);
		printf("response2 = %d\n", response2);
} */