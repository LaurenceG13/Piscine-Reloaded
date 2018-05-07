/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:53:21 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/18 15:45:21 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	ft_display_file(char *argv)
{
	int		fd;
	char	*buf;

	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
}
