/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 10:23:45 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/07 17:06:17 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ac;

	str = (unsigned char *)b;
	ac = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = ac;
		i++;
	}
	return (b);
}
