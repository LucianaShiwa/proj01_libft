/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:34:51 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/19 20:34:54 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strrchr -- locate character in string
char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	*s2;

	s2 = (char *)s;
	size = ft_strlen(s);
	while (size)
	{
		if (s2[size] == ((char)c))
		{
			if (((char)c) == '\0')
				return (&s2[size]);
			return (&s2[size]);
		}
		size--;
	}
	if (size == 0 && s2[0] != ((char)c))
		return (NULL);
	return (&s2[size]);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	int c;
	char *result;
	char *result2;

	c = 'a';
	char s[10] = "aeeeeeeee";

	result = strrchr(s, c);
		printf("   strrchr= %s\n", result);
		printf("   strrchr= %p\n\n", result);

	result2 = ft_strrchr(s, c);
		printf("ft_strrchr= %s\n", result2);
		printf("ft_strrchr= %p\n\n", result2);
} */
//
// strchr, strrchr -- locate character in string
//  The strrchr() function is identical to strchr(), 
// except it locates the last occurrence of c.