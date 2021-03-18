/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:16:27 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/20 12:17:41 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		potencia(int base, int exp)
{
	int	p;

	p = base;
	while (exp > 1)
	{
		p = p * base;
		exp--;
	}
	return (p);
}

int		num_dig(int i)
{
	int	num;

	num = 1;
	if (i == -2147483648)
		num = 11;
	else
	{
		if (i < 0)
		{
			i = -i;
			num++;
		}
		while (i / 10 > 0)
		{
			i = i / 10;
			num++;
		}
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		d;

	d = num_dig(n);
	if (!(a = (char *)malloc(sizeof(char) * d + 1)))
		return (NULL);
	if (n == -2147483648)
	{
		a = "-2147483648";
		return (a);
	}
	a[d] = '\0';
	if (n < 0)
		n = -n;	
	while (n > 0)
	{
		a[d - 1] = n % 10 + 48;
		n = n / 10;
		d--;
	}
	if (a[0] == '0')
		a[0] = '-';
	if (n == 0 && d != 0)
		a[0] = '0';
	return (a);
}
