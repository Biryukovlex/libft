/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 15:24:43 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/30 19:34:58 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				get_next_len(char **next_str,
unsigned int *next_str_len, char c)
{
	unsigned int	j;

	j = 0;
	*next_str = *next_str + *next_str_len;
	(*next_str_len) = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[j])
	{
		if ((*next_str)[j] == c)
			return ;
		j++;
		(*next_str_len)++;
	}
}

unsigned int		count_str(char *st, char a)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (st[i] && st[i] == a)
		i++;
	while (st[i])
	{
		if (st[i] == a)
		{
			count++;
			while (st[i] && st[i] == a)
				i++;
			continue ;
		}
		i++;
	}
	if (st[i - 1] != a)
		count++;
	return (count);
}

char				**free_string(char **toclean, unsigned int i)
{
	while (i > 0)
	{
		free(toclean[i - 1]);
		i--;
	}
	free(toclean);
	return (NULL);
}

char				**spare_string(void)
{
	char			**spare;
	unsigned int	string;

	string = 0;
	spare = (char **)malloc(sizeof(char *));
	spare[0] = NULL;
	return (spare);
}

char				**ft_split(char const *s, char c)
{
	char			**new;
	char			*next_str;
	unsigned int	string;
	unsigned int	next_str_len;

	string = 0;
	next_str_len = 0;
	next_str = (char *)s;
	if (!s)
		return (NULL);
	if (s[0] == '\0' || count_str((char *)s, c) == 0)
		return (spare_string());
	if (!(new = (char **)malloc(sizeof(char *)
	* (count_str((char *)s, c)) + 1)))
		return (NULL);
	while (string < (count_str((char *)s, c)))
	{
		get_next_len(&next_str, &next_str_len, c);
		if (!(new[string] = (char *)malloc(sizeof(char) * (next_str_len + 1))))
			return (free_string(new, string));
		ft_strlcpy(new[string], next_str, (next_str_len + 1));
		string++;
	}
	new[string] = NULL;
	return (new);
}
