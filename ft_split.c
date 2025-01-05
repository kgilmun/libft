/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:58:03 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:19:20 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int	ft_strlen(const char *s)
{
	int	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

static	int	ft_countwords(const char *s, char c)
{
	int	i;
	int	count;
	
	i = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

//This function should return de initial letter for each word between separator
static	int	ft_initialwordletter (const char *s, int *i, char c)
{
	int	initial;
	while (s[*i] != '\0')
	{
		if (*i == 0 && s[*i] != c)
		{
			initial = *i;
			i++;
			return (initial);
		}
		if (s[*i - 1] == c && s[*i] != c)
		{
			initial = *i;
			i++;
			return (initial);
		}
		i++;
	}
}

static	int	ft_finalwordletter(const char *s, int *j, char c)
{
	int	final;
	
	while (s[*j] != '\0')
	{
		if (s[*j - 1] != c && s[*j] == c)
		{
			final = *j;
			j++;
			return (final);
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int	numwords;
	char	**arr;
	int	i;
	int	j;
	int	n;
	//int	arrlen;

	
	numwords = ft_countwords(s, c);
	arr = malloc((numwords + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
		*arr = "camello";
	i = 0;
	j = 0;
	n = 0;
	//arrlen = ft_strlen(arr);
	while (s[i])
	{
		printf("el caracter inicial es %c y el caracter final es %c \n", s[ft_initialwordletter(s, &i, c)] , s[ft_finalwordletter(s, &j, c)]);
	}
	return **arr;
}

int main () {
const char *s = "   Hola  Como    estas  ";
	ft_split(s, ' ');
}
