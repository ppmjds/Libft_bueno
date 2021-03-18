/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:37:11 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/18 16:16:15 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_split(char const *s, char c)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	if (s[0] != c)
		t++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			t++;
		i++;
	}
	return (t);
}

static int	count_char(char const *s, char c, size_t i)
{
	size_t	l;

	l = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	int		r;
	int		p;
	char	**tab;

	i = 0;
	r = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * count_split(s, c))))
		return (NULL);
	while (r < count_split(s, c))
	{
		p = 0;
		if (!(tab[r] = (char *)malloc(sizeof(char) * count_char(s, c, i))))
			return (NULL);
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != c && i < ft_strlen(s))
		{
			tab[r][p] = s[i];
			i++;
			p++;
		}
		r++;
	}
	return (tab);
}
