/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:34:02 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:07:20 by kgil-mun         ###   ########.fr       */
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
