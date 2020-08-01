/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:21:57 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/26 19:16:41 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*restrict dst, const char	*restrict src,
size_t dstsize)
{
	unsigned long d;
	unsigned long s;
	unsigned long count;

	d = 0;
	while (dst[d] != '\0' && d < dstsize)
		d++;
	s = 0;
	while (src[s] != '\0' && s + d + 1 < dstsize)
	{
		dst[d + s] = src[s];
		s++;
	}
	if (d != dstsize)
		dst[d + s] = '\0';
	count = 0;
	while (src[count] != '\0')
		count++;
	return (d + count);
}
