/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:01:19 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/13 19:01:19 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strchr -- locate character in string
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char *)s;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == ((char)c))
			return (&s2[i]);
		i++;
	}
	if (((char)c) == '\0')
		return (&s2[i]);
	else
		return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	int c;
	char *result;
	char *result2;

	c = 'o';
	char s[10] = "Hello";

	result = strchr(s, c);
	result2 = ft_strchr(s, c);
		printf("strchr= %s\n", result);
		printf("ft_strchr= %s\n", result2);
}
*/
/*
DESCRIPTION
     The strchr() function locates the first occurrence of 
	 c (converted to a char) in the string pointed to by s.  
	 The terminating null character is considered to be part of the string;
     therefore if c is `\0', the functions locate the terminating `\0'.
RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the 
	 located character, or NULL if the character does not appear 
	 in the string.
*/