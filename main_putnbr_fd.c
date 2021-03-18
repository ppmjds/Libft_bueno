/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:46:42 by pperez-m          #+#    #+#             */
/*   Updated: 2021/02/07 12:38:44 by pperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd);

int		main(void)
{
	int		n;
	int		fd;

	n = 543210;
	fd = open ("textfile.txt", O_WRONLY);
	ft_putnbr_fd(n, fd);
	return (0);
}
