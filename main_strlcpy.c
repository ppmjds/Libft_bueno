/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:36:05 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/15 11:50:02 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char		dst[] = "Los-7-magnificos";
	const char	src[] = "";
	size_t		size;
//	size_t		sol;
	size_t		sol1;

	size = 4;
//	sol = ft_strlcpy(dst, src, size);
	sol1 = strlcpy(dst, src, size); 
//	printf("ft_strlcpy = %ld\n", sol);
	printf("src = %s\n", src);
	printf("dst = %s\n", dst);
	printf("strlcpy = %ld\n", sol1);
//	printf("src = %s\n", src);
//	printf("dst = %s\n", dst);
	return (0);
}
