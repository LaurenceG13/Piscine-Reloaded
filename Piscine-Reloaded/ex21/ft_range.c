/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:05:25 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/11 18:18:02 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;
	int		n;

	n = max - min;
	if (min >= max)
		return (0);
	else
	{
		tab = (int *)malloc(sizeof(max) * n);
		if (tab == NULL)
			return (0);
		else
		{
			tab[0] = min;
			i = 1;
			while (i < n)
			{
				tab[i] = min + i;
				i++;
			}
			return (tab);
		}
	}
	return (NULL);
}
