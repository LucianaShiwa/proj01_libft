/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:50:11 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/27 18:50:15 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	num_words;

	num_words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			num_words++;
		i++;
	}
	return (num_words);
}

static char	*my_cut_and_paste(char const *s, int start, int len)
{
	char	*palabra;
	int		i;

	i = 0;
	palabra = (char *)malloc(sizeof(char) * (len + 1));
	if (!palabra)
		return (NULL);
	while (i < len)
	{
		palabra[i] = s[start + i];
		i++;
	}
	palabra[i] = '\0';
	return (palabra);
}

static char	**free_split_memory(int w, char **split)
{
	while (w-- > 0)
		free(split[w]);
	free(split);
	return (NULL);
}

static char	**split_insert(char **split, char const *s, char c)
{
	int		i;
	int		start;
	int		num_inserted;

	i = 0;
	start = 0;
	num_inserted = 0;
	while (s[i] != '\0')
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			split[num_inserted] = my_cut_and_paste(s, start, i - start + 1);
			if (!split[num_inserted])
				return (free_split_memory(num_inserted, split));
			num_inserted++;
		}
		i++;
	}
	split[num_inserted] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		num_words;

	num_words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!split)
		return (NULL);
	split = split_insert(split, s, c);
	return (split);
}
/*
#include <stdio.h>

int main()
{
	char **splitted;
	char **result;
	int i;

	printf("\n------------------------\n");

	splitted = ft_split("hola como estás Luci ? \
		No dejes de creer que puedes. Aprenderás!", ' ');
		i = 0;
		while(splitted[i])
		{
			printf("%s\n", splitted[i]);
			i++;
		}
		if (splitted[i] == NULL)
			printf(">> Bien cerrado <<\n");

	printf("\n------------------------\n");

	result = ft_split("hello!", ' ');
		i = 0;
		while(result[i])
		{
			printf("i:%d -- %s\n", i, result[i]);
			i++;
		}
		if (result[i] == NULL)
			printf("i:%d, >> Bien cerrado <<\n", i);

	printf("\n------------------------\n");
} 
*/
//
// splitted = ft_split("Hola Luci ", ' ');
//
//sep = ' '
// "hola que     tal" -> 3
// " hola que tal" -> 3
// "hola que tal " -> 3
// "          " -> 0
// "" -> 0
//
//  obs:
// 		split[num_inserted] = my_cut_and_paste(s, start, i - start + 1);
// 	or
// 		split[num_inserted] = ft_substr(s, start, i - start + 1);