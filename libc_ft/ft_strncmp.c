/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:33:16 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/07 11:27:36 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && *s1 && *s1 == *s2)
		if (!*s1++ || !*s2++)
			return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
