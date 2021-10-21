/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:24:07 by juhagon           #+#    #+#             */
/*   Updated: 2021/09/29 16:42:03 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	tmp;

	tmp = 0;
	while (str[tmp] != '\0')
	{
		if (str[tmp] < 32 || str[tmp] == 127)
			return (0);
		tmp++;
	}
	return (1);
}
