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

#include <stdio.h>
#include <stdlib.h>

static	int	ft_strlen (char const *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return i;
}

static	char	*ft_substr(const char *str, unsigned int start, size_t len)
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
	while (i <= len)
	{
		p[i] = str[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		initial;
	int		final;
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
	i = ft_strlen(s1) - 1;
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

int main () {
	printf("%s\n", ft_strtrim("espana", "espan"));
	printf("%s\n", ft_strtrim("   manzana", " a"));
	printf("%s\n", ft_strtrim("111111vieta", "1vio"));
	printf("%s\n", ft_strtrim("aspana", "a"));
	printf("%s\n", ft_strtrim("sesese", "es"));
	printf("%s\n", ft_strtrim("", "es"));
	printf("%s\n", ft_strtrim("espana", ""));
	printf("%s\n", ft_strtrim("andnaaa", "a"));
}
