/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:07:17 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/21 13:20:14 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	tmp2;
	int	cont;

	tmp = 0;
	while (tmp < size - 1)
	{
		if (tab[tmp] > tab[tmp + 1])
		{
			tmp2 = tab[tmp];
			tab[tmp] = tab[tmp + 1];
			tab[tmp + 1] = tmp2;
			tmp = 0;
		}
		else
			tmp++;
	}
}
