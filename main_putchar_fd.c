/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:46:42 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/07 11:49:00 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd);

int		main(void)
{
	char	c;
	int		fd;

	c = 'A';
	fd = open ("textfile.txt", O_WRONLY);
	ft_putchar_fd(c, fd);
	return (0);
}
