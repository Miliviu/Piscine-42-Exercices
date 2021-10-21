/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:24:07 by juhagon           #+#    #+#             */
/*   Updated: 2021/09/29 12:49:17 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	tmp;

	tmp = 0;
	while (str[tmp] != '\0')
	{
		if ((str[tmp] < 65) || str[tmp] > 90)
			return (0);
		tmp++;
	}
	return (1);
}
