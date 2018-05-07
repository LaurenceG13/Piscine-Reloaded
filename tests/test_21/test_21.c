/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_21.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:37:21 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/11 18:48:52 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		*tab;
	int		min;
	int		max;
	int		n;
	int		i;

	if (argc != 3)
		return (0);
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	tab = ft_range(min, max);
	n = max - min;
	i = 0;
	while (i < n)
	{
		ft_putnbr(tab[i]);
		ft_putstr(" ");
		i++;
	}
	ft_putstr("\n");
	return (0);
}
