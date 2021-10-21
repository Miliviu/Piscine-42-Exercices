/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:31:27 by juhagon           #+#    #+#             */
/*   Updated: 2021/09/30 18:46:14 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if ((str[0] > 96) && (str[0] < 123))
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65) \
		|| (str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] -= 32;
		}
		else if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}
