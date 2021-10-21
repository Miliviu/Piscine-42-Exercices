/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 08:00:00 by juhagon           #+#    #+#             */
/*   Updated: 2021/09/29 17:35:01 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	tmp;

	tmp = 0;
	while (src[tmp] != '\0' && tmp < n)
	{
		dest[tmp] = src[tmp];
		tmp++;
	}
	while (tmp < n)
	{
		dest[tmp] = '\0';
		tmp++;
	}
	return (dest);
}
