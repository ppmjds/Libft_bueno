/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:28:16 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/14 12:01:52 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		l;
	int		i;
	char	*as;
	char	ac;

	as = (char *)s;
	ac = (char)c;
	i = 0;
	l = ft_strlen(as);
	while (s[i] != '\0' && ac != s[i])
		i++;
	if (i < l)
		return (&as[i]);
	if (ac == '\0')
		return (&as[l]);
	else
		return (0);
}
