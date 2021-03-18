/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 13:37:58 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/17 13:02:36 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		del_ini(const char *org, char const *cset)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (cset[j] != '\0')
	{
		if (org[i] == cset[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

int		del_end(char const *org1, char const *cset1)
{
	int		len;
	int		n;

	n = 0;
	len = ft_strlen(org1);
	while (len > 0 && cset1[n] != '\0')
	{
		if (org1[len - 1] == cset1[n])
		{
			len--;
			n = -1;
		}
		n++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		a;
	int		k;
	int		n;
	int		f;

	k = 0;
	n = 0;
	if (!(str = malloc(sizeof(s1))))
		return (NULL);
	a = del_ini(s1, set);
	while (s1[k] != '\0')
	{
		str[k] = s1[a + k];
		k++;
	}
	f = del_end(str, set);
	str[f] = '\0';
	return (str);
}
