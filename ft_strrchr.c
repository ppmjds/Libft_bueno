/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:35:55 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/14 12:08:04 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*as;
	char	ac;
	int		i;
	int		l;

	i = 0;
	as = (char *)s;
	ac = (char)c;
	l = ft_strlen(as);
	if (ac == '\0')
		return (&as[l]);
	while (i < l && ac != as[l - 1 - i])
		i++;
	if (i == l)
		return (0);
	else
		return (&as[l - i - 1]);
}
