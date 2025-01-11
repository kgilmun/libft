/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:42:13 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:07:46 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*initial;
	unsigned char	*final;
	size_t			len;

	initial = (unsigned char *)src;
	final = (unsigned char *)dest;
	len = n - 1;
	while (len > 0)
	{
		final[len] = initial[len];
		len--;
	}
	return (final);
}
