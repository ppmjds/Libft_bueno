/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:59:13 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/15 13:15:17 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	hay = (char *)haystack;
	l = ft_strlen(needle);
	if (l == 0)
		return (hay);
	else if (ft_strlen(hay) == 0 || len == 0)
		return (NULL);
	else
	{
		while (i < len && needle[0] != hay[i])
			i++;
		while (j < l && i + l <= len && needle[j] == hay[j + i])
			j++;
		if (j == l)
			return (&hay[i]);
		else
			return (NULL);
	}
}
