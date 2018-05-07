/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test08.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:05:25 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/10 12:24:42 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	int		n;
	int		i;
	int		s;
	int		r;
	int		nbr;

	i = 0;
	n = 0;
	s = 1;
	r = 0;
	nbr = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
		{
			s = -1;
			i++;
		}
		while (argv[1][i])
		{
			n = (argv[1][i] + '0' - 96);
			nbr = nbr * 10 + n;
			i++;
		}
		r = ft_iterative_factorial(s * nbr);
	}
	ft_putnbr(r);
	return (0);
}
