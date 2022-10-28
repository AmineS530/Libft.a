/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:30:46 by asadik            #+#    #+#             */
/*   Updated: 2022/10/26 12:40:58 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*awa;
	char		*aya;

	awa = ((const char *)src);
	aya = ((char *)dest);
	if (!dest && !src)
		return (NULL);
	if (src < dest)
		while (n--)
			*(aya + n) = *(awa + n);
	else
		ft_memcpy(aya, awa, n);
	return (dest);
}
