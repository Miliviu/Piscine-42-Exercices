/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 08:10:24 by juhagon           #+#    #+#             */
/*   Updated: 2021/09/28 16:48:57 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	tmp;

	tmp = 0;
	while (str[tmp] != '\0')
	{	
		if (str[tmp] < 65 || (str[tmp] > 90 && str[tmp] < 97))
			return (0);
		else if (str[tmp] > 122)
			return (0);
		tmp++;
	}
	return (1);
}
