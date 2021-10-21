/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:22:11 by juhagon           #+#    #+#             */
/*   Updated: 2021/10/01 07:40:02 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	tmp;
	int				rtrn;

	rtrn = 0;
	tmp = 0;
	if (n == 0)
		return (0);
	while (s1[tmp] == s2[tmp] && s1[tmp] != '\0' && s2[tmp] != '\0' \
	&& n - 1 > tmp)
		tmp++;
	return (s1[tmp] - s2[tmp]);
}
