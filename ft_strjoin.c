/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:02:36 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/26 21:02:39 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * \
			(((ft_strlen((char *)s1) + ft_strlen((char *)s2))) + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
/*
#include <stdio.h>

// s3 = I want s1 + s2
//strlen returns without the \0;
int main (int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("s3 = %s", ft_strjoin(argv[1], argv[2]));
	}
} */
// 	s1: La primera string.
// 	s2: La string a añadir a ’s1’.
// Return:
// 		La nueva string.
// 		NULL si falla la reserva de memoria.
// Reserva (con malloc(3)) y devuelve una nueva string,
// 		formada por la concatenación de ’s1’ y ’s2’.