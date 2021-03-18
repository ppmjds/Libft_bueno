/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:55:34 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/15 12:24:42 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char		dst[] = "char";
	const char	*src = "abcdefgh";
	size_t		size;
	size_t		sol;

	size = 10;
	sol = ft_strlcat(dst, src, size);
	printf("ft_strlcat = %zu\n", sol);
	printf("src = %s\n", src);
	printf("dst = %s\n", dst);
	return (0);
}
