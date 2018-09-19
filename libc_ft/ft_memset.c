/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 07:26:25 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/19 11:47:00 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t          rank;
	unsigned char   *ptr;

	rank = 0;
	ptr = b;
	while (rank < len && ptr[rank])
		ptr[rank++] = (unsigned char) c;
	while (rank < len)
	{
		ptr[rank++] = (unsigned char) c;
		(rank == len) ? (ptr[rank] = '\0') : 0;
	}
	return (b);
}
