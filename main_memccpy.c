/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:03:20 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/04 13:39:42 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int	main(void)
{
	char		dst[] = "Los_7_magnificos";
	const char	src[] = "Hola*Mundo";
	int			c;
	size_t		n;

	c = 'l';
	n = 5;

	printf("c = %d\n", c);
//	printf("memccpy = %s\n", memccpy(dst, src, c, n));
	printf("ft_memccpy = %s\n", ft_memccpy(dst, src, c, n));
	printf("dst = %s\n", dst);
	return (0);
}
