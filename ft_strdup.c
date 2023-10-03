/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:37:03 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/25 17:37:07 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strdup, strndup – save a copy of a string
// The strndup() function copies at most n characters from the string s1 
// always NUL terminating the copied string.
char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	char	*copy;

	size = 0;
	while (s1[size] != '\0')
		size++;
	copy = malloc(sizeof(*s1) * (size + 1));
	if (!copy || !s1)
		return (NULL);
	i = 0;
	while (i <= size - 1)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *result = ft_strdup("Helloooooooooooo");
	char *result2 = strdup("Helloooooooooooo");
		printf ("\nft_strdup = %s\n", result);
		printf ("\n   strdup = %s\n\n", result2);
}
*/
// DESCRIPTION
//      The strdup() function allocates sufficient memory 
// 			for a copy of the string s1, does the copy, and
//      returns a pointer to it.  The pointer may subsequently 
// 			be used as an argument to the function
//      free(3).
//      If insufficient memory is available, NULL is returned 
//			and errno is set to ENOMEM.
//
// obs:
// We can also make the code shorter by 2 lines, using strlen:
//		copy= (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));