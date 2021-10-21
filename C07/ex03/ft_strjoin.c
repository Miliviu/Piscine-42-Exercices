/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:23:38 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/08 14:40:24 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *rt;
	int i;

	i = 0;
	rt = malloc(sizeof(rt));
	while (i < size)
	{
		if (strs[i + 1] ==  '\0')
			rt[i] = sep;
		ft_strcat(rt, strs[i]);
		i++;
		
	}
	return(rt);

}
