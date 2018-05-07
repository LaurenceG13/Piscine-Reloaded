/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_26.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:00:58 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/14 19:35:29 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_if(char **tab, int(*f)(char*));

void	ft_putnbr(int nb);

int		ft_un(char *tab)
{
	if (*tab == 'a')
		return (1);
	else
		return (0);
}

int		main(void)
{
	char	**tab;
	int		n;

	tab = (char **)malloc(sizeof(int) * 4);
	tab[0] = "b";
	tab[1] = "a";
	tab[2] = "a";
	tab[3] = "a";
	n = ft_count_if(tab, &ft_un);
	ft_putnbr(n);
	return (0);
}
