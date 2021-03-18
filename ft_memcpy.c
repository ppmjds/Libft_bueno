/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 08:35:38 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/14 10:58:02 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*str0;

	str = (char*)dst;
	str0 = (char*)src;
	i = 0;
	if (n == 0)
		return (dst);
	if (src == NULL && dst == NULL)
		return (NULL);
	else
	{
		while (i < n)
		{
			str[i] = str0[i];
			i++;
		}
		return (dst);
	}
}
