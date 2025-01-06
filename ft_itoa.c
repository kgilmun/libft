/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:38:40 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:19:42 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	numlen(int n)
{
	int count;

	count = 0;
	while (n > 9 )
	{
		count++;
		n = n / 10;
	}
	count++;
	if (n < 0)
	{
		while (n < -9 )
	{
		count++;
		n = n / 10;
	}
	count ++;
	}
	return (count);
}

char	*convert(int n, int len, char *p, int i)
{
	if (n < 0)
	{
	    p[i] = '-';
	    i++;
	}
	while (i < len)
	{
		p[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	p[i] = '\0';
	printf("\nEl puntero es: %s\n", p);
	return (p);
}

char *ft_itoa(int n)
{
	int	len, start, end;
	char	*p;
	char	temp;

	if (n > 2147483647)
		return (NULL);
	if (n < -2147483648)
		return (NULL);
	len = numlen(n);
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
		printf("llega hasta despues de mallc?\n");
	start = 0;
	p = convert(n, len, p, start);
	end = len - 1;
	while (start < end)
	{
		temp = p[start];
		p[start] = p[end];
		p[end] = temp;
		start++;
		end--;
	}
	return (p);
}

int main()
{
	int n = -1234567;
	char *p = ft_itoa(n);
	printf("el puntero devuelto es: %s", p);
}
