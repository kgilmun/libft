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

static	char	**ft_storewords(const char *s, char c, char **arr)
{
	int	i, start, end, n;
	char	*p;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
		    printf("\nsoy diferente de c\n en la posicion inicial es: %i\n", i);
			start = i;
			while (s[i] != c)
			{
			    printf("soy diferente de c en la posicion %i\n", i);
			    i++;
			} 
			printf("la posicion final es %i\n\n", i);
			end = i;
			p = ft_substr (s, start, (end - start));
			if (p == NULL)
			{
			    return NULL;
			}
			printf("he copiado la palabra: '%s' en el puntero p\n", p);
			arr[n] = p;
			printf("se ha añadido '%s' al array\n", p);
			n++;
		}
		if (s[i] == c)
			i++;
	}
	arr[n] = NULL;
	return (arr);
	
}

char	**ft_split(char const *s, char c)
{
	int	numwords;
	char	**arr;

	
	numwords = ft_countwords(s, c);
	arr = malloc((numwords + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	arr = ft_storewords(s, c, arr);
	return arr;
}

int main () {
    const char *s = "   Hola  Como    estas  ";
	char **p = ft_split(s, ' ');
	int i = 0;
	printf("Se tiene que imprimir por pantalla: '%s' haciendo split:\n\n", s);
	while (p[i] != NULL) {
	    printf("%s\n", p[i]);
	    i++;
	}
	return 0;
}
