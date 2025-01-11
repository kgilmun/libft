/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:22:50 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:10:39 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*fletter;

	fletter = NULL;
	while (*str)
	{
		if (*str == c)
			fletter = (char *)str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	else if (c == *fletter)
		return (fletter);
	else
		return (NULL);
}
