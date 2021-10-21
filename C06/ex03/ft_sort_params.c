/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:58:28 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/06 13:33:52 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	tmp;

	tmp = 0;
	while (s1[tmp] == s2[tmp] && s1[tmp] != '\0' && s2[tmp] != '\0')
		tmp++;
	return (s1[tmp] - s2[tmp]);
}

int	main(int argc, char **argv)
{
	int		tmp;
	char	*tmp2;

	tmp = 1;
	while (tmp < argc - 1)
	{
		if (ft_strcmp(argv[tmp], argv[tmp + 1]) > 0)
		{
			tmp2 = argv[tmp];
			argv[tmp] = argv[tmp + 1];
			argv[tmp + 1] = tmp2;
			tmp = 0;
		}
		tmp++;
	}
	tmp = 1;
	while (tmp < argc)
	{
		ft_putstr(argv[tmp]);
		ft_putchar('\n');
		tmp++;
	}
	return (0);
}
