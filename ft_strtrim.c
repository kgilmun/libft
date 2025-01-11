/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:41:30 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:18:56 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	int		i, j, initial, final;
	char	*str;

	i = 0;
	j = 0;
	while (set[j] && s1[i])
	{
		if (s1[i] == set[j])
			i++;
		else
			j++;
	}
	initial = i;
	i = ft_strlen((char *)s1) - 1;
	j = 0;
	while (set[j] && s1[i])
	{
		if (s1[i] == set[j])
			i--;
		else
			j++;
	}
	final = i;
	str = ft_substr(s1, initial, (final - initial));
	return (str);
}
/*int main () {
	printf("%s\n", ft_strtrim("espana", "espan"));
	printf("%s\n", ft_strtrim("   manzana", " a"));
	printf("%s\n", ft_strtrim("111111vieta", "1vio"));
	printf("%s\n", ft_strtrim("aspana", "a"));
	printf("%s\n", ft_strtrim("sesese", "es"));
	printf("%s\n", ft_strtrim("", "es"));
	printf("%s\n", ft_strtrim("espana", ""));
	printf("%s\n", ft_strtrim("andnaaa", "a"));
}*/
