/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test17.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 10:43:10 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/11 10:48:38 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	int		n;
	int		m;

	n = 0;
	m = 0;
	if (argc == 3)
	{
		n = ft_strcmp(argv[1], argv[2]);
		m = strcmp(argv[1], argv[2]);
		ft_putnbr(n);
		ft_putstr(" ");
		ft_putnbr(m);
	}
	return (0);
}
