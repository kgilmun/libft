/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:34:02 by kgil-mun          #+#    #+#             */
/*   Updated: 2024/12/28 11:36:33 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(coid *dest, const void *src, size_t count)
{
	unsigned char		*initial;
	unsigned char		*final;
	size_t				i;

	initial = (unsigned char *)src;
	initial = (unsigned char *)dest;
	i = 0;
	while (i < count)
	{
		final[i] = initial[i];
		i++;
	}
}
