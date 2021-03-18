/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:02:51 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/14 10:59:55 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*src0;
	unsigned char	*dst0;
	unsigned char	ac;
	size_t			i;
	size_t			k;

	i = 0;
	k = 0;
	src0 = (char*)src;
	dst0 = (char*)dst;
	ac = (unsigned char)c;
	while (src0[i] != '\0' && src0[i] != ac)
		i++;
	while (k <= i && k < n)
	{
		dst0[k] = src0[k];
		k++;
	}
	if (i < n)
		return (&dst[i + 1]);
	else
		return (0);
}
