/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 10:03:01 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/23 22:28:41 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0 && *(unsigned char *)s1 == *(unsigned char *)s2)
		if (!(*(unsigned char *)s1))
			return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
