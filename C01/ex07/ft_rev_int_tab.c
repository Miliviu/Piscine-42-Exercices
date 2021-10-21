/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:43:08 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/21 13:20:00 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(char *tab, int size)
{
	int	tmp;
	int	tmp2;

	tmp = 0;
	while (tmp < size - 1)
	{	
		tmp2 = tab[tmp];
		tab[tmp] = tab[size - 1];
		tab[size - 1] = tmp2;
		tmp++;
		size = size - 1;
	}	
}			
