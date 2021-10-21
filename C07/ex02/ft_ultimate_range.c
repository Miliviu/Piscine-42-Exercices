/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 08:57:39 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/21 13:23:29 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_range(int **range, int min, int max)
{
	int	size;
	int	*output;
	int b;

	b = max - min;

	if (min >= max)
		return (0);
	max--;
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	while (size >= 0)
	{
		range[0][size] = max;
		max--;
		size--;
	}
	return (b);
}
