/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgil-mun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:08:49 by kgil-mun          #+#    #+#             */
/*   Updated: 2024/12/28 11:09:40 by kgil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int d)
{
	if (d > 47 && d < 58)
		return (1);
  	return (0);
}
