/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:35:14 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/04 16:16:22 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	long	x;

	x = i;
	if (x < 0)
	{
		ft_putchar('-');
		x = -x;
	}
	if (x < 10)
		 ft_putchar(x + '0');
	else if (x > 0)
	{
		ft_putnbr(x / 10);
		ft_putchar(x % 10 + '0');
	}
}
