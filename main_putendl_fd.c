/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:46:42 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/07 12:34:13 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd);

int		main(void)
{
	char	*s;
	int		fd;

	s = "Hola mundo";
	fd = open ("textfile.txt", O_WRONLY);
	ft_putendl_fd(s, fd);
	return (0);
}
