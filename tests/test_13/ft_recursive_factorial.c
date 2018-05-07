/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:35:48 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/10 12:25:00 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int n;

	n = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb >= 13)
		return (0);
	if (nb > 0 && n < 13)
	{
		n = n * ft_recursive_factorial(nb - 1);
		return (n);
	}
	return (0);
}
