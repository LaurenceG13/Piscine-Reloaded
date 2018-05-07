/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_25.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:12:43 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/14 18:52:33 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nb);

int		main(void)
{
	int		str[4];

	str[0] = 0;
	str[1] = 1;
	str[2] = 2;
	str[3] = 3;
	ft_foreach(str, 4, &ft_putnbr);
	return (0);
}
