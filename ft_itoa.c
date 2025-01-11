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

#include "libft.h"

int	numlen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static int	handle_min_int(int i, char *p)
{
	p[0] = '-';
	p[i] = '8';
	return (214748364);
}

static void	fill_number(int n, int i, char *p, int control)
{
	while (i >= control)
	{
		p[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
}

char	*convert(int n, int len, char *p)
{
	int	i;
	int	control;

	i = len - 1;
	control = 0;
	if (n < 0)
	{
		p[0] = '-';
		control = 1;
		if (n == -2147483648)
		{
			n = handle_min_int(i--, p);
		}
		else
			n *= -1;
	}
	fill_number(n, i, p, control);
	p[len] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;

	if (n > 2147483647)
		return (NULL);
	if (n <= -2147483648)
		return (NULL);
	len = numlen(n);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	p = convert(n, len, p);
	return (p);
}
/*
int main()
{
	int n = -2147483648;
	char *p = ft_itoa(n);
	printf("el puntero devuelto es: %s", p);
	
	n = 1234567;
	p = ft_itoa(n);
	printf("el puntero devuelto es: %s", p);
}*/
