/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:49:23 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:13:54 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t i;
	void *p;
	unsigned char *pbyte;

	i = 0;
	p = malloc(num * size);
	pbyte = (unsigned char *)p;
	if (p == NULL)
		return (NULL);
	while (i < (num * size))
	{
		pbyte[i] = 0;
		i++;
	}
	return (p);
}

int main ()
{
	printf("%p", ft_calloc(5, 4));
}
