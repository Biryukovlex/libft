/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:49:30 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/10 01:20:18 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *point;

	point = (char *)s;
	while (*point)
	{
		if (*point == (char)c)
			return (point);
		point++;
	}
	if (*point == '\0' && !c)
		return (point);
	return (NULL);
}
