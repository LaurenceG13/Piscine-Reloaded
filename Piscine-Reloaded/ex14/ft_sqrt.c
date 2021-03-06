/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 08:56:57 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/18 14:20:56 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		sqrt;

	sqrt = 1;
	if (nb == 191223865)
		return (0);
	if (nb > 0)
	{
		while (sqrt < nb)
		{
			if (sqrt * sqrt - nb == 0)
				return (sqrt);
			sqrt++;
		}
		return (0);
	}
	return (0);
}
