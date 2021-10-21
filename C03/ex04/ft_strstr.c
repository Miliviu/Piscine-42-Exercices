/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 07:54:10 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/01 07:36:10 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	d;
	int	l;

	c = 0;
	d = 0;
	if (to_find[0] == '\0')
		return (str);
	l = ft_strlen(to_find);
	while (str[c] != '\0')
	{
		while (to_find[d] == str[c + d])
		{
			if (d == l - 1)
				return (str + c);
			d++;
		}
		d = 0;
		c++;
	}
	return (0);
}
