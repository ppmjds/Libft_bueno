/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:29:54 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/07 19:39:04 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size);

int	main(void)
{
	size_t	count;
	size_t	size;
	size_t	*ptr;
	
	count = 3;
	size = sizeof(size_t);
	ptr = ft_calloc(count, size);
	ptr[0] = 2;
	ptr[1] = 4;
	ptr[2] = 6;
	printf("calloc = %p\n", ptr);
	printf("calloc = %p\n", &ptr[0]);
	printf("calloc = %zu\n", ptr[0]);
	printf("calloc1 = %p\n", &ptr[1]);
	printf("calloc1 = %zu\n", ptr[1]);
	printf("calloc2 = %p\n", &ptr[2]);
	printf("calloc2 = %zu\n", ptr[2]);
	return (0);
}
