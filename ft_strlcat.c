/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:51:32 by asadik            #+#    #+#             */
/*   Updated: 2022/10/09 13:46:15 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	i = 0;
	while (i <= dstsize)
	{
		dst[slen + i] = src[i];
		i++;
	}
	dst[slen + i] = '\0';
	return (i);
}
