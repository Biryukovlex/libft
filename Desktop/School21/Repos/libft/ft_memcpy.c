/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 18:10:37 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/27 01:05:07 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned long	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char	*)src;
	str2 = (unsigned char	*)dst;
	i = 0;
	if (n == 0)
		return (dst);
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n--)
	{
		str2[i] = str1[i];
		i++;
	}
	return (dst);
}
