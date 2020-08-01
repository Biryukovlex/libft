/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 13:56:54 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/10 17:14:45 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	h;
	unsigned long	n;

	h = 0;
	if (!*needle)
		return ((char *)haystack);
	while (h < len && haystack[h] != '\0')
	{
		if (haystack[h] == needle[0])
		{
			n = 1;
			while (needle[n] != '\0' && needle[n] == haystack[h + n] &&
			(h + n) < len)
				n++;
			if (needle[n] == '\0')
				return ((char *)&haystack[h]);
		}
		h++;
	}
	return (NULL);
}
