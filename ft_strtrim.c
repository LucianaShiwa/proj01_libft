/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:31:23 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/27 15:31:27 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’. 
// ou seja, elimina tudo que está antes e depois da palavra em set.
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*trim;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	while (s1[start] && ft_strchr(set, ((int)s1[start])))
		start++;
	while (ft_strchr(set, ((int)s1[end])) && end > 0)
		end--;
	trim = ft_substr(s1, start, ((end - start) + 1));
	if (!trim)
		return (NULL);
	return (trim);
}
/*
#include <stdio.h>

int main (int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("\nResult: %s\n\n", ft_strtrim(argv[1], argv[2]));
	}
} */
// ./a.out "_hola_como_estas__" "_"
// ./a.out "_hola_como_estas__" " "
// ./a.out " " " "
// ./a.out " _hola_ " " _"
//
// _hola_como_estas_
// _
// hola_como_estas.
//
// s1: La string que debe ser recortada.
// set: Los caracteres a eliminar de la string.
// return: La string recortada.
// 			NULL si falla la reserva de memoria.
// malloc
// La string resultante se devuelve con una reserva de malloc(3)
//
// char	*ft_strchr(const char *s, int c) 