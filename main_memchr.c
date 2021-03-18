/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 10:22:33 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/03 10:37:12 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	unsigned char	s[] = "Los_ñ_magnificos";
	int		c;
	size_t	n;
	char	*sol;
	char	*mem;

	c = 195;
	n = 22;
	mem = memchr(s, c, n);
	sol = ft_memchr(s, c, n);
	printf("s[4] = %i\n", s[4]);
	printf("memchr = %s\n", mem);
	printf("ft_memchr = %s\n", sol);
	return (0);
}
