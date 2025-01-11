/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:37:24 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:15:02 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	count;	
	char			*p;

	count = 0;
	if (str == NULL)
		return (NULL);
	while (str[count])
		count++;
	if (start >= count)
		return (NULL);
	if ((start + len) > count)
		len = count - start;
	i = 0;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = str[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int main () {
	char *p = ft_substr("Hola.que tal", 9, 6);
	printf("%s\n", p);
}*/
