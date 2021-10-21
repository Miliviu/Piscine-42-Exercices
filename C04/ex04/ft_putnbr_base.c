/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:35:14 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/07 15:46:21 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checkerror(char	*base)
{
	int	c;
	int	f;

	c = 0;
	f = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[c] != '\0')
	{
		f = c + 1;
		if (base[c] == '+' || base[c] == '-')
			return (0);
		while (base[f])
		{
			if (base[c] == base[f])
				return (0);
			f++;
		}
		f = 0;
		if (base[c + 1] == '\0')
			return (1);
		c++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			longbase;
	long int	nbr2;

	nbr2 = (long)nbr;
	longbase = ft_strlen(base);
	if (checkerror(base) == 1)
	{
		if (nbr2 < 0)
		{
			ft_putchar('-');
			nbr2 = -nbr2;
		}
		if (nbr2 < longbase)
		{
			ft_putchar(base[nbr2]);
		}
		else if (nbr2 >= longbase)
		{
			ft_putnbr_base(nbr2 / longbase, base);
			ft_putchar(base[nbr2 % longbase]);
		}
	}
}

int	main()
{
	ft_putnbr_base(999, "0123456789abcdef");
}