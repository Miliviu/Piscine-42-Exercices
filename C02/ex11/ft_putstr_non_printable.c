/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:17:28 by juhagon           #+#    #+#             */
/*   Updated: 2021/09/29 17:32:01 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	tmp;

	tmp = 1;
	while (str[tmp] != '\0')
	{
		if (str[tmp] < 32 || str[tmp] == 127)
		{	
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[tmp] / 16]);
			ft_putchar("0123456789abcdef"[str[tmp] % 16]);
		}
		else
			ft_putchar(str[tmp]);
		tmp++;
	}
}
