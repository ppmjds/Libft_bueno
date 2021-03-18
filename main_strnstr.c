/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:03:05 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/15 13:17:29 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	const char	*haystack = "Foo Bar Baz";
	const char	*needle = "Bar";  //Si needle está vacía, devuelve haystack//
	char		*ptr;			  //Si needle no está en haystack, devuelve NULL//
	char		*ptr1;
	size_t		l;

	l = 7;
	ptr = strnstr(haystack, needle, l);
	ptr1 = ft_strnstr(haystack, needle, l);
	printf("strnstr = %s\n", ptr);
	printf("ft_strnstr = %s\n", ptr1);
	return (0);
}
