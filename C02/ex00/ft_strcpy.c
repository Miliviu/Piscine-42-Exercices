/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 07:46:05 by juhagon           #+#    #+#             */
/*   Updated: 2021/09/29 13:25:26 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
