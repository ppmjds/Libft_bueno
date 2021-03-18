/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:18:36 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/16 13:29:36 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char const		*s;
	unsigned int	start;
	size_t			len;
	char			*substr;
	size_t			j;

	s = "Hola";
	start = 4;
	len = 3;
	j = 0;
	substr = ft_substr(s, start, len);
	while (j < len + start)
	{
		printf("substr = %c\n", substr[j]);
		j++;
	}
	printf("substr0 = %c\n", substr[0]);
	return (0);
}
