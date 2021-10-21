/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:13:59 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/05 17:16:35 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	backtracking(int tab[10], int col, int *count);
void	ft_put_table(int tab[10]);
int		check_errors(int tab[10], int col);

void	backtracking(int tab[10], int col, int *count)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		tab[col] = i;
		if (check_errors(tab, col))
		{
			if (col == 10 - 1)
			{
				ft_put_table(tab);
				*count += 1;
			}
			else
				backtracking(tab, col + 1, count);
		}
		i++;
	}
	return ;
}

void	ft_put_table(int tab[10])
{
	char	b;
	int		i;

	i = 0;
	while (i < 10)
	{
		b = tab[i] + '0';
		write(1, &b, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_errors(int tab[10], int col)
{
	int	tmp;
	int	aum;

	aum = 1;
	tmp = tab[col];
	--col;
	while (col >= 0)
	{
		if (tmp == tab[col])
			return (0);
		if (tab[col] == aum + tmp || tab[col] == tmp - aum)
			return (0);
		col--;
		aum++;
	}
	return (1);
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	counter;

	counter = 0;
	backtracking(tab, 0, &counter);
	return (counter);
}
