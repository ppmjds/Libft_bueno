/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:08:38 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/14 12:15:54 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	const char	s1[] = "";
	const char	s2[] = "l";
	size_t		n;

	n = 13;
	printf("strncmp = %d\n", strncmp(s2, s1, n));
	printf("ft_strncmp = %d\n", ft_strncmp(s2, s1, n));
	return (0);
}
