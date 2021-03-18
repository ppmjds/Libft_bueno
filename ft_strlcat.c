/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:35:36 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/15 12:24:38 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	strlcat;
	size_t	i;

	i = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (dstsize > 0 && lendst < dstsize)
	{
		while (i < dstsize - lendst - 1 && src[i] != '\0')
		{
			dst[lendst + i] = src[i];
			i++;
		}
		dst[lendst + i] = '\0';
		strlcat = lensrc + lendst;
	}
	else
		strlcat = lensrc + dstsize;
	return (strlcat);
}
