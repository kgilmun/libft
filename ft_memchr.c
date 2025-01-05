/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:28:40 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:11:59 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			count;

	p = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (*p == c)
			return (p);
		p++;
		count++;
	}
	return (NULL);
}
/*
int main ()
{
	const void *s = "Me encanta la manzana";
	char c = 'l';
	size_t n = 10;
	char *result = ft_memchr(s, c, n);
	if (result == NULL)
		printf("es NULL");
	else
		printf("buscamos es %c, esta en posicion %ld\n", c, result -(char *)s);
}*/
