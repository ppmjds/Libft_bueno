/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:33:08 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/14 12:16:24 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	lens1;
	size_t	lens2;
	int		strncmp;
	size_t	i;

	i = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (lens1 == 0 && lens2 == 0)
		strncmp = 0;
	else
		while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
		{
			if (s1[i] == s2[i])
				strncmp = 0;
			else
			{
				strncmp = (unsigned char)s1[i] - (unsigned char)s2[i];
				break ;
			}
			i++;
		}
	return (strncmp);
}
