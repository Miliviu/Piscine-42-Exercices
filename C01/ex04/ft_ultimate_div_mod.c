/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:52:08 by juhagon           #+#    #+#             */
/*   Updated: 2021/09/26 18:57:34 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = *a / *b;
	temp2 = *a % *b;
	*a = temp;
	*b = temp2;
}
