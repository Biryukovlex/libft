/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 17:03:24 by kjoker            #+#    #+#             */
/*   Updated: 2020/05/27 02:20:07 by kjoker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		num_len(int nb)
{
	int count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count++;
		nb *= (-1);
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = num_len(n);
	if (!(new = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	new[len--] = '\0';
	if (n == 0)
	{
		new[0] = 48;
		return (new);
	}
	if (n < 0)
	{
		new[0] = '-';
		n *= (-1);
	}
	while (n > 0)
	{
		new[len--] = 48 + (n % 10);
		n /= 10;
	}
	return (new);
}
