/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:33:16 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/08 16:18:18 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

/*int        ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s2[i] == s1[i] && n--)
	{
		s1++;
		s2++;
		i++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}*/
