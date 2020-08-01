/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:11:28 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/27 01:57:28 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*s2;

	if (!(ptr = malloc(ft_strlen(s1) + 1)))
		return (NULL);
	s2 = ptr;
	while (*s1 != '\0')
	{
		*s2 = *s1;
		s2++;
		s1++;
	}
	*s2 = '\0';
	return (ptr);
}
