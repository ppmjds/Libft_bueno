/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:16:41 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/20 12:20:02 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_itoa(int n);

int	num_dig(int i);

int	potencia(int base, int exp);

int	main(void)
{
	int 	i;
	char	*str;
	int		nd;

	i = -5414520;
	str = ft_itoa(i);
	printf("itoa = %s\n", str);
	nd = num_dig(i);
	printf("num_dig = %d\n", nd);
	return (0);
}
