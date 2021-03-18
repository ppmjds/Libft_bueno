/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:38:14 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/18 16:16:31 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	const char	*s;
	char		c;
	char		**tab;

	s = ",Los,,,,7,magn,,,ific,,,os";
	c = ',';
	tab = ft_split(s, c);
	system("leaks a.out");
    printf("%s\n", tab[0]);
    printf("%s\n", tab[1]);
    printf("%s\n", tab[2]);
    printf("%s\n", tab[3]);
    printf("%s\n", tab[4]);
	return (0);	
}
