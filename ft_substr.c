/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:22:47 by asadik            #+#    #+#             */
/*   Updated: 2022/10/14 17:25:20 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
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
