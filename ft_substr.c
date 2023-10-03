/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:11:37 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/26 17:11:39 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	j = 0;
	i = start;
	while (s[i] != '\0' && i >= start && j < len)
	{
		sub[j] = s[i];
		j++;
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		char *result = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
		printf("result: %s\n", result);
		free(result);
	}
} */
//
// obs:
// if (start > s_len)
// 		return (ft_strdup("")); //strdup devuelve malloc c/1 espacio p/ \0
//
//input:
//	s = hola
//	start = 2
//	len = 4726784683764365387
//obs:
// yo necesito solo 5, así que ajusto y hago malloc solo con el necesario:
//		len = 5