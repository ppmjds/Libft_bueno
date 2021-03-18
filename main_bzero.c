/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:16:02 by pperez-m          #+#    #+#             */
/*   Updated: 2021/01/23 08:16:09 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	*ft_bzero(void *s, size_t n);

int		main(void)
{
	char	s[] = "Hola Mundo";
	size_t	n;
	char	*sol;

	n = 3;
	sol = ft_bzero(s, n);
	printf("ft_bzero = %s\n", sol);
	printf("bzero = %s\n", bzero(s, n));
	printf("sol[0] = %c\n", sol[0]);
	printf("sol[1] = %c\n", sol[1]);
	printf("sol[2] = %c\n", sol[2]);
	printf("sol[3] = %c\n", sol[3]);
	printf("sol[4] = %c\n", sol[4]);
	printf("sol[5] = %c\n", sol[5]);
	printf("sol[6] = %c\n", sol[6]);
	return (0);
}
