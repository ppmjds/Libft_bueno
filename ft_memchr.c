/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:59:39 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/07 13:58:36 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*as;
	unsigned char	ac;
	size_t			i;

	i = 0;
	as = (unsigned char *)s;
	ac = (unsigned char)c;
	while (as[i] != '\0' && as[i] != ac)
		i++;
	if (i < n)
		return (&as[i]);
	else
		return (0);
}
