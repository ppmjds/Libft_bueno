/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:05:56 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/01 15:13:14 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int	main(void)
{
	int	c;

	c = 17;
	printf("isascii = %d\n", isascii(c));
	printf("ft_isascii = %d\n", ft_isascii(c));
	return(0);
}
