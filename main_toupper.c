/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:39:19 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/01 15:45:23 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	int	c;

	c = 'T';
	printf("toupper = %d\n", toupper(c));
	printf("ft_toupper = %d\n", ft_toupper(c));
	return (0);
}
