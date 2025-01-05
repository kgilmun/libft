/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:53:15 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:13:31 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi( const char *str)
{
	int i;
	int signo;
	int resultado;

	i = 0;
	signo = 1;
	resultado = 0;
	if (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			return (0);
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				signo = -1;
			i++;
		}
		if (str[i] < '0' || str[i] > '9')
			return 0;
		while (str[i] >= '0' && str[i] <= '9')
		{
			resultado = resultado * 10 + (str[i] - '0');
			i++;
		}
		return (resultado * signo);
	}
	return 0;
}

int main () {
	printf("%i\n", ft_atoi("abc123"));
	printf("%i\n", ft_atoi(" -45"));
	printf("%i\n", ft_atoi("      +42abc123"));
	printf("%i\n", ft_atoi("abc123"));
	printf("%i\n", ft_atoi("-99999"));
	printf("%i\n", ft_atoi("               -+++-789"));

	
	return 0;
}
