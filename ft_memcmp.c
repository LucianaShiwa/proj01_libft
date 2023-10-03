/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:58:10 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/25 16:58:13 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memcmp – compare byte string
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (n == 0 || n < 0)
		return (0);
	i = 0;
	while (i < n && ss1[i] == ss2[i])
		i++;
	if (i == n)
		return (0);
	else
		return ((int)(ss1[i] - ss2[i]));
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	int result1;
	int result2;
	size_t n1;
	size_t n2;

	n1 = 17;
	char string1 [17] = "Hola Todo Bienn?";
	char string2 [17] = "Hola muy  Bienn?";

		result1 = memcmp(string1, string2, n1);
			printf("memcmp = %d\n", result1);


	n2 = 17;
	char string3 [17] = "Hola Todo Bienn?";
	char string4 [17] = "Hola muy  Bienn?";

		result2 = ft_memcmp(string3, string4, n2);
			printf("ft_memcmp = %d\n", result2);
} */
// The memcmp() function compares byte string s1 against byte string s2.
//      Both strings are assumed to be n bytes long.
// the function will stop comparing once it has compared n characters, 
// preventing out-of-bounds memory access. (i < n)
// RETURN VALUES
//      The memcmp() function returns zero if the two strings are identical,
//      otherwise returns the difference between the first two differing bytes
//      (treated as unsigned char values, so that ‘\200’ is greater than ‘\0’,
//      for example).  Zero-length strings are always identical.  This behavior
//      is not required by C and portable code should only depend on the sign of
//      the returned value.