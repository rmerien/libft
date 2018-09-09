/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 01:00:37 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/09 17:17:18 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	while (s1[j])
		j++;
	i = 0;
	while (s2[i] && i < (int)n)
		s1[j + i] = s2[i++];
	s1[j + i] = s2[i];
	return (s1);
}
