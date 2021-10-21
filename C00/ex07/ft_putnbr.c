/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:35:14 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/21 13:18:35 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	if (i == -2147483648)
	{
		write(1, "-2", 2); // I'm really sorry for this
		i = 147483648;
	}

	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i < 10)
		 ft_putchar(i + '0');
	else if (i > 0)
	{
		ft_putnbr(i / 10);
		ft_putchar(i % 10 + '0');
	}
}
