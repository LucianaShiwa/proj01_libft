/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:23:53 by lushiwa           #+#    #+#             */
/*   Updated: 2023/10/01 19:23:56 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	if (s == 0 || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

// The erase_letter function was created just to test it.
static void erase_letter (unsigned int i, char *c)
 {
	printf("\nYou erased %d letters. Actual word is: %s\n", i, c);
}

int main()
{
	char *s = "Hellooo";
	ft_striteri(s, erase_letter);
	return (0);
}
*/
//
// s: The string on which to iterate.
// f: The function to apply to each character.
// Return value: none;
// External functions: none;
// Description:
// 		Applies the function ’f’ on each character of
// 		the string passed as argument, passing its index
// 		as first argument. Each character is passed by
// 		address to ’f’ to be modified if necessary.