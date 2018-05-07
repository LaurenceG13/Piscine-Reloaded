/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test16.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 09:59:36 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/11 10:22:08 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		ft_strlen(char *str);

int		main(int argc, char **argv)
{
	int		n;
	int		m;

	n = 0;
	m = 0;
	if (argc == 2)
	{
		n = ft_strlen(argv[1]);
		ft_putnbr(n);
		ft_putstr(" =? ");
		m = strlen(argv[1]);
		ft_putnbr(m);
		if (n == m)
			ft_putstr(" --> OUI !\n");
		else
			ft_putstr(" --> NON !n");
	}
	return (0);
}
