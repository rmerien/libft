/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:37:18 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/09 15:39:17 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	if (!needle || !haystack)
		return ((char*)"ERROR : strings passed as arguments are invalid !");
	if (!needle[0])
		return ((char*)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
				j++;
			if (!needle[j])
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
