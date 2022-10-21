/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:23:00 by asadik            #+#    #+#             */
/*   Updated: 2022/10/18 11:07:58 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	hlen;
	size_t	nlen;

	i = 0;
	if (needle[i] == '\0' || needle == haystack)
		return (((char *)haystack));
	hlen = ft_strlen(haystack);
	nlen = ft_strlen(needle);
	while (*haystack && i < len)
	{
		j = 0;
		while (i + j < len)
		{
			if (haystack[i + j] == needle[j])
				j++;
			if (i + j == len)
				return (&((char *)haystack)[hlen - i + nlen + 1]);
			break ;
		}
		i++;
	}
	return (NULL);
}
