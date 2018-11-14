/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 00:16:19 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/14 06:50:20 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (!(new_string = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	new_string[len] = '\0';
	while (len-- && s[start])
		new_string[i++] = s[start++];
	return (new_string);
}
