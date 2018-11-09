/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:10:10 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/09 18:21:36 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_insert_sort(int *tab, int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (++i < ft_strlen(tab))
	{
		j = i;
		while (j && tab[j - 1] > tab[j])
		{
			ft_swap(tab[j], tab[j - 1]);
			j--;
		}
	}
}
