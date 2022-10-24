/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:22:47 by asadik            #+#    #+#             */
/*   Updated: 2022/10/22 00:10:43 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
	{
		sub = malloc(ft_strlen(s) + 1);
		len = ft_strlen(s);
	}
	else
		sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		*(sub + i++) = *(s++ + start);
	}
	*(sub + i) = '\0';
	return (sub);
}
