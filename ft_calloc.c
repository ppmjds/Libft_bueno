/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:28:47 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/07 19:04:59 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*ptr;

	if (!(ptr = malloc(count * size)))
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
