/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:33:16 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/09 20:54:18 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] && i < (unsigned int)len)
		i++;
	return ((int)s1[i] - s2[i]);
}
