/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:18:28 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/09 15:25:55 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int j;

	if (!needle || !haystack)
		return ((char*)"ERROR : strings passed as arguments are invalid !");
	if (!needle[0])
		return ((char*)haystack);
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j])
				j++;
			if (!needle[j])
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
