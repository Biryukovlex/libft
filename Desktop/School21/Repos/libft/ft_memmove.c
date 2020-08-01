/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 01:04:35 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/10 14:49:40 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char	*)src;
	str2 = (unsigned char	*)dst;
	i = 0;
	if (dst < src)
		while (i < len)
		{
			str2[i] = str1[i];
			i++;
		}
	else if (dst > src)
		while (len--)
			str2[len] = str1[len];
	else if (dst == src || len == 0)
		return (dst);
	return (dst);
}
