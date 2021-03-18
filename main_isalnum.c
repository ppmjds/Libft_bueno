/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:51:30 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/01 15:05:36 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	main(void)
{
	int	c;

	c = 58;
	printf("c = %d\n", c);
	printf("isalnum = %d\n", isalnum(c));
	printf("ft_isalnum = %d\n", ft_isalnum(c));
	return (0);
}

