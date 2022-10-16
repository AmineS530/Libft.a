/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:14:05 by asadik            #+#    #+#             */
/*   Updated: 2022/10/09 13:47:04 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*awa;

	awa = ((char *) s);
	len = ft_strlen(s);
	while ((int)len >= 0)
	{
		if (awa[len] == c)
		{
			return (&awa[len]);
		}
		len--;
	}
	if (awa[len] == c)
	{
		return (&awa[len]);
	}
	return (0);
}