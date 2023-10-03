/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:58:32 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 18:58:53 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//lexicographically compare strings, the null-terminated strings s1 and s2.
//compares not more than n characters. After a `\0' character are not compared.
//  int strncmp(const char *s1, const char *s2, size_t n);
int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (0);
}
//The comparison is done using unsigned characters
// meaning: return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// return integer:
// se s1 > s2 == return negativo;
// se s2 > s1 == return positivo;
// se s1 == s2 == return zero;
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char s2[] = "hellobbye";
	char s1[] = "helloz";
	int n;
	int result;
	int result2;

	n = 6;
		printf("\nIn strlcpy= s1: %s, s2: %s.\n\n", s1, s2);

	result = strncmp(s1, s2, n);
		printf("Out    strlcpy:%d, s1:%s, s2:%s.\n", result, s1, s2);
	result2 = ft_strncmp(s1, s2, n); 
		printf("Out ft_strncmp:%d, s1lu:%s, s2lu:%s.\n\n", result2, s1, s2);
} */