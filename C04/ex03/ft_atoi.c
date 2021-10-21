/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:58:57 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/21 13:22:02 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*check_sign(char *str, int tmp)
{
	static int	output[2];

	output[0] = 0;
	while (str[tmp] == '-' || str[tmp] == '+')
	{
		if (str[tmp] == '-')
			output[0]++;
		tmp++;
	}
	output[1] = tmp;
	return (output);
}

int	ft_atoi(char *str)
{
	long int	tmp;
	long int	sign;
	long int	nmb;

	nmb = 0;
	tmp = 0;
	while (str[tmp] == 32 || str[tmp] == '\n' || \
	str[tmp] == '\v' || str[tmp] == '\r' || str[tmp] == '\t')
		tmp++;
	sign = check_sign(str, tmp)[0];
	tmp = check_sign(str, tmp)[1];
	while (str[tmp] >= '0' && str[tmp] <= '9')
	{
		nmb = nmb * 10 + str[tmp] - '0';
		tmp++;
	}
	if (sign % 2 != 0)
		nmb = -nmb;
	return (nmb);
}
