/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 08:57:39 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/06 10:44:49 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*output;

	if (min >= max)
		return (0);
	max--;
	size = max - min;
	output = malloc(size * sizeof(int));
	while (size >= 0)
	{
		output[size] = max;
		max--;
		size--;
	}
	return (output);
}
