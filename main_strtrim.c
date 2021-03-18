/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:23:53 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/17 13:03:03 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strtrim(const char *s1, char const *set);

int	main(void)
{
	const char	*s1;
	const char	*set;
	char		*strtrim;

	s1 = "hola caracola";
	set = "aloh";

	strtrim = ft_strtrim(s1, set);
	printf("strtrim = %s\n", strtrim);
	return (0);
}
