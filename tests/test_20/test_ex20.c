/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex20.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:37:11 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/12 11:29:39 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	char	*dest;

	if (argc == 2)
	{
		dest = ft_strdup(argv[1]);
		ft_putstr(dest);
	}
	return (0);
}
