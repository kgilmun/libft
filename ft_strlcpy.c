/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <kgil-mun@student.42barcelon>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:52:49 by kgil-mun          #+#    #+#             */
/*   Updated: 2025/01/05 16:08:10 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
