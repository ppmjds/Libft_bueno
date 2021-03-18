/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:46:42 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/17 13:06:00 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd);

int		main(void)
{
	char	*s;
	int		fd;

	s = "Hola mundo";
	fd = open ("textfile.txt", O_WRONLY);
	ft_putstr_fd(s, fd);
	return (0);
}
