/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:52:49 by kgil-mun          #+#    #+#             */
/*   Updated: 2024/12/28 11:56:32 by kgil-mun         ###   ########.fr       */
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
