/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 02:18:24 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/29 15:08:29 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*ptr;

	if (!s1)
		return (NULL);
	if (!(new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	ptr = new;
	while (*s1 != '\0')
	{
		*new = *s1;
		new++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*new = *s2;
		new++;
		s2++;
	}
	*new = '\0';
	return (ptr);
}
