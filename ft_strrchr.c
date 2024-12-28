/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:22:50 by kgil-mun          #+#    #+#             */
/*   Updated: 2024/12/28 14:49:41 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*fletter;

	fletter = NULL;
	while (*str)
	{
		if (*str == c)
			fletter = (char *)tr;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	else if (c == *fletter)
		return (fletter);
	else
		return (NULL);
}
