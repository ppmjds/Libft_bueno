/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 13:26:49 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/06 13:37:46 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char const	*s1;
	char const	*s2;
	char		*strjoin;
//	int			j;

//	j = 0;
	s1 = "Hola ";
	s2 = "Mundo";
	strjoin = ft_strjoin(s1, s2);
	printf("strjoin = %s\n", strjoin);
	return (0);
}
