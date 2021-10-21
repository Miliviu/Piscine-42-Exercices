/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:10:28 by juhagon           #+#    #+#             */
/*   Updated: 2021/09/28 07:45:27 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	tmp;

	tmp = 0;
	while (s1[tmp] == s2[tmp] && s1[tmp] != '\0' && s2[tmp] != '\0')
		tmp++;
	return (s1[tmp] - s2[tmp]);
}
