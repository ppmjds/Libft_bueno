/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:23:20 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/16 11:34:19 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	const char *str;

	str = "  154abc356";
	printf("atoi = %d\n", atoi(str));
	printf("ft_atoi = %d\n", ft_atoi(str));
	return (0);
}
