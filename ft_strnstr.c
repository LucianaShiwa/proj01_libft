/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:52:06 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/25 17:52:10 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  strstr – locate a substring in a string
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0' || needle == NULL)
		return ((char *)haystack);
	if (len > 0 && i < len)
	{
		while ((haystack[i] != '\0') && (needle[j] != '\0'))
		{
			if (haystack[i] == needle[0])
			{
				while ((haystack[i + j] == needle[j]) && ((i + j) < len))
				{
					if (needle[j + 1] == '\0')
						return ((char *)&haystack[i]);
					j++;
				}
			}
			i++;
		}
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("mi strnstr: %s\n", ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
		printf("strnstr: %s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	}
} */
//
// To test it, copy and paste it to check the result after compiling:
// (you can also change the parameters for further tests)
// 		./a.out "Hellooo" "e" "2"
// 		./a.out "Hello" "el" "3" 
//
// haystack = palheiro = pajar;
// needle = agulha = aguja;
//
//  The strnstr() function locates the first occurrence of the
//      null-terminated string needle in the string haystack,
// 		where not more than len characters are searched.
// 		Characters that appear after a `\0' character are not searched.
// RETURN VALUES
//      If needle is an empty string, haystack is returned; 
// 		if needle occurs nowhere in haystack, NULL is returned;
//      otherwise a pointer to the first character of the first occurrence 
//      of needle is returned.