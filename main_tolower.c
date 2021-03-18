/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:39:19 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/01 16:42:03 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	int	c;

	c = 'l';
	printf("tolower = %d\n", tolower(c));
	printf("ft_tolower = %d\n", ft_tolower(c));
	return (0);
}
