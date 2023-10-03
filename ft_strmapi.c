/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:23:33 by lushiwa           #+#    #+#             */
/*   Updated: 2023/10/01 19:23:38 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (s[len])
		len++;
	new_s = malloc(sizeof(char) * (len + 1));
	if (!s || !new_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
#include <stdio.h>

// to_upper function here is just to test if ft_strmapi calls it.
static char to_upper (unsigned int i, char c)
 {
	if (i == '\0')
		i = 0;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}

int main()
{
	char *s = "helloooo";
	char *result = ft_strmapi(s, to_upper);
		printf("input: %s -- result: %s\n", s, result);
	free(result);
}
*/
//
//
// Applies the function ’f’ to each character of the string ’s’, 
// and passing its index as first argument to create a new string
// (with malloc(3)) resulting from successive applications of ’f’.
//
// 	s: The string on which to iterate.
// 	f: The function to apply to each character.
// 		malloc
// return: 
// 		The string created from the successive applications of ’f’.
// 		Returns NULL if the allocation fails.