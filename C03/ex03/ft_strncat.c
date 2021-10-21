/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:14:24 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/01 11:24:08 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int nb)
{
	unsigned int	tmp;

	tmp = 0;
	while (src[tmp] != '\0' && tmp < nb)
	{
		dest[tmp] = src[tmp];
		tmp++;
	}
	while (tmp < nb)
	{
		dest[tmp] = '\0';
		tmp++;
	}
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	tmp;

	tmp = 0;
	while (src[tmp] != '\0')
	{
		dest[tmp] = src[tmp];
		tmp++;
	}
	dest[tmp] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src,	unsigned int nb)
{
	unsigned int	l1;
	unsigned int	l2;

	l1 = ft_strlen(dest);
	l2 = ft_strlen(src);
	if (l2 < nb)
	{
		ft_strcpy(&dest[l1], src);
	}
	else
	{
		ft_strncpy(&dest[l1], src, nb);
		dest[l1 + nb] = '\0';
	}
	return (dest);
}
