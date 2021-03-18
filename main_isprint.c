/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:13:48 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/01 15:38:02 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	int	 c;

	c = 127;
	printf("c = %d\n", c);
	printf("isprint = %d\n", isprint(c));
	printf("ft_isprint = %d\n", ft_isprint(c));
	return (0);
}
