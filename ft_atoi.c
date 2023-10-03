/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:02:45 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/25 17:02:48 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || \
		c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	ascii2int;

	sign = 1;
	i = 0;
	ascii2int = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ascii2int = ascii2int * 10 + (str[i] - '0');
		i++;
	}
	return (sign * ascii2int);
}

/*while (str[i] >= '0' && str[i] <= '9') // "12" == 12
	{
		if (ascii2int > max_int / 10 || \
			(ascii2int == max_int / 10 && str[i] - '0' > max_int % 10))
		{
			if (sign == 1)
				return (max_int);
			else
				return ((max_int + 1) * -1);
		}
		ascii2int = (ascii2int * 10) + (str[i] - '0');
		i++;
	}
	*/
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **argv)
{
	if (ac == 2)
	{
		printf("test 1: %d\n", ft_atoi(argv[1]));

		printf("test raro: %d\n", ft_atoi(((void *)0)));
		printf("test raro 2: %d\n", atoi(((void *)0)));
	}
	return (0);
}*/
/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char str1 [] = "-50";
		int result = atoi(str1);
			printf("\natoi = %d\n", result);
		int result2 = ft_atoi(str1);
			printf("ft_atoi = %d\n\n", result2);

	char str2 [] = "12345";
		int result3 = atoi(str2);
			printf("atoi = %d\n", result3);
		int result4 = ft_atoi(str2);
			printf("ft_atoi = %d\n\n", result4);	

	char str3 [] = "+20+7";   // volta 20 , porque?
		int result5 = atoi(str3);
			printf("atoi = %d\n", result5);
		int result6 = ft_atoi(str3);
			printf("ft_atoi = %d\n\n", result6);
	
	char str4 [] = "-20-7";   //volta -20 , porque?
		int result7 = atoi(str4);
			printf("atoi = %d\n", result7);
		int result8 = ft_atoi(str4);
			printf("ft_atoi = %d\n\n", result8);
		
	char str5 [] = "\n 11";     // error: precisa ignorar caracteres de control
		int result9 = atoi(str5);
			printf("atoi = %d\n", result9);
		int result10 = ft_atoi(str5);
			printf("ft_atoi = %d\n\n", result10);

	char str6 [] = "2147483647";
		int result11 = atoi(str6);
			printf("atoi = %d\n", result11);
		int result12 = ft_atoi(str6);
			printf("ft_atoi = %d\n\n", result12);

	char str7 [] = "*-+500";
		int result13 = atoi(str7);
			printf("atoi = %d\n", result13);
		int result14 = ft_atoi(str7);
			printf("ft_atoi = %d\n\n", result14);

			
	char str8 [] = "-2147483646"; // INT_MIN
		int result15 = atoi(str8);
			printf("atoi = %d\n", result15);
		int result16 = ft_atoi(str8);
			printf("ft_atoi = %d\n\n", result16);

	free(result);
	free(result2);
	free(result3);
	free(result4);
	free(result5);
	free(result6);
	free(result7);
	free(result8);
	free(result9);
	free(result10);
	free(result11);
	free(result12);
	free(result13);
	free(result14);
	free(result15);
	free(result16);
} 
*/