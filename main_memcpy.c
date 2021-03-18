/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 08:36:03 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/14 10:58:38 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	char		*dst = NULL;
	const char	*src = NULL;
	size_t		n;

	n = 5;	
	printf("memcpy = %s\n", memcpy(dst, src, n));
	printf("ft_memcpy = %s\n", ft_memcpy(dst, src, n));
	return (0);
}
