/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 19:21:52 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/30 13:42:54 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	if (n == 0)
		return (s);
	while (n--)
	{
		p[i++] = 0;
	}
	return (s);
}
