/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 13:51:01 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/16 11:37:39 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1);

int	main(void)
{
	const char	*s1;
	char		*ptr;

	s1 = "Hola Mundo";
	ptr = ft_strdup(s1);
	printf("strdup = %p\n", ptr);
	printf("strdup = %p\n", &ptr);
	printf("strdup = %c\n", *ptr);
	printf("strdup = %c\n", ptr[0]);
	printf("strdup = %c\n", ptr[1]);
	printf("strdup = %c\n", ptr[2]);
	printf("strdup = %c\n", ptr[3]);
	printf("strdup = %c\n", ptr[4]);
	printf("strdup = %c\n", ptr[5]);
	printf("strdup = %c\n", ptr[6]);
	printf("strdup = %c\n", ptr[7]);
	printf("strdup = %c\n", ptr[8]);
	printf("strdup = %c\n", ptr[9]);
	return (0);
}
