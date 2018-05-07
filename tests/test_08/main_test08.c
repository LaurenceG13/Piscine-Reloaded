/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test08.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:05:25 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/10 10:33:57 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n);

int		main(int argc, char **argv)
{
	int		n;
	int		i;
	int		s;

	i = 0;
	n = 0;
	s = 1;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
		{
			s = -1;
			i++;
		}
		while (argv[1][i])
		{
			n = argv[1][i] + '0';
			i++;
		}
		ft_is_negative(s * n);
	}
	return (0);
}
