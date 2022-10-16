/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:31:20 by asadik            #+#    #+#             */
/*   Updated: 2022/10/16 16:00:36 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_revtab2(char *str)
{
	int	array_e;
	int	array_b;
	int	tmp;

	array_e = (ft_strlen(str) - 1);
	array_b = 1;
	tmp = 0;
	while (array_b < array_e)
	{
		tmp = str[array_b];
		str[array_b] = str[array_e];
		str[array_e] = tmp;
		array_b++;
		array_e--;
	}
	return (str);
}

static int	ft_nbr_len(int nb)
{
	int	owo;

	owo = 0;
	if (nb < 0)
	{
		owo++;
		nb *= -1;
	}
	while (nb)
	{
		nb /= 10;
		owo++;
	}
	return (owo);
}

char	*ft_itoa(int n)
{
	int		uwu;
	char	*results;
	int		len;

	if (n == 0)
		return ("0");
	len = ft_nbr_len(n);
	results = malloc (sizeof(char) * len +1);
	if (!results)
		return (NULL);
	uwu = 0;
	if (n < 0)
	{
		n *= -1;
		*(results + uwu++) = '-';
	}
	while (n > 0)
	{
		*(results + uwu++) = ((n % 10) + '0');
		n = n / 10;
	}
	ft_revtab2(results);
	*(results + uwu) = '\0';
	return (results);
}