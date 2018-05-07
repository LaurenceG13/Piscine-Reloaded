/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test15.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 09:27:50 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/11 09:43:17 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		i;

	ft_putstr(argv[1]);
	i = 2;
	while (i < argc)
	{
		ft_putstr(" ");
		ft_putstr(argv[i]);
		i++;
	}
	ft_putstr("\n");
	return (0);
}
