/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:37:09 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/01 14:50:29 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main(void)
{
	int	c;

	c = 'a';
	printf("isdigit = %d\n", isdigit(c));
	printf("ft_isdigit = %d\n", ft_isdigit(c));
	return (0);
}
