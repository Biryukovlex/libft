/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 00:30:47 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/31 00:35:19 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	size_t			count;

	count = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	if (!(new = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (count < len)
	{
		new[count] = s[start];
		count++;
		start++;
	}
	new[count] = '\0';
	return (new);
}
