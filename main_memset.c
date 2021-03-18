/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 09:12:34 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/03 12:55:21 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_memset(void *b, int c, size_t len);

int		main(void)
{
	char	b[] = "Hola mundo";
	size_t	len;
	char	*sol;
	int		c;

	c = 37;
	len = 5;
	sol = ft_memset(b, c, len);
	printf("memset = %s\n", memset(b, c, len));
	printf("ft_memset = %s\n", sol);
	return (0);
}
