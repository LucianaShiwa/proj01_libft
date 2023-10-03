/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lushiwa <lushiwa@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:21:03 by lushiwa           #+#    #+#             */
/*   Updated: 2023/09/27 20:21:08 by lushiwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	get_number_size(int n)
{
	int	num_digits;

	num_digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		num_digits++;
		n = n / 10;
	}
	return (num_digits);
}

static char	*put_num(char *s, int n, int num_digits)
{
	int	i;

	i = 0;
	while (i < num_digits)
	{
		s[i] = '0' + n % 10;
		n = n / 10;
		i++;
	}
	return (s);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	s[12];
	int		num_digits;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	num_digits = get_number_size(n);
	if (n < 0)
	{
		s[num_digits] = '-';
		s[num_digits + 1] = '\0';
		n = n * -1;
	}
	else
		s[num_digits] = '\0';
	*s = *put_num(s, n, num_digits);
	if (s[num_digits] == '-')
		num_digits++;
	while (num_digits)
	{
		num_digits--;
		write(fd, &s[num_digits], 1);
	}
}
/*
#include <stdio.h>

int main()
{
	int n = 2147483647;
	int fd = 1;
	ft_putnbr_fd(n, fd);

	// -2147483648
	// 2147483647
	// 0
	// -1
	// 100
	// ft_putnbr_fd(-2147483648, 1);

	//fd = 1 ----> print at screen (pantalla)
	//fd = 2 ----> show error message at screen
} */