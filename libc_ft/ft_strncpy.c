/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 22:49:13 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/07 11:25:10 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *tdst;

	tdst = dst;
	while (len--)
	{
		if (*src)
			*tdst++ = *src++;
		else
			*tdst++ = '\0';
	}
	return (dst);
}
