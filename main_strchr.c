/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 10:23:22 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/14 12:02:03 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	const char	s[] = "Los_ñ_magnificos";
	int		c;

	c = '\0';
	printf("strchr = %s\n", strchr(s, c));
	printf("ft_strchr = %s\n", ft_strchr(s, c));
	return (0);
}
