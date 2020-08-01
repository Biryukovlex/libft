/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 19:06:18 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/27 01:09:06 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
int c, size_t n)
{
	unsigned long	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char	*)src;
	str2 = (unsigned char	*)dst;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n--)
	{
		str2[i] = str1[i];
		if (str1[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
