/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:18:30 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:06:22 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *p, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;
	size_t			i;

	ptr = (unsigned char *)p;
	value = (unsigned char *)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
}
