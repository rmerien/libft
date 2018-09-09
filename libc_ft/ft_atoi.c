/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 00:22:56 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/09 20:37:23 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	unsigned long long	res;
	int					sign;
	long				arch;

	res = 0;
	arch = 2147483647;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	sign = (*str == '-' ? (-1) : 1);
	(*str == '-' || *str == '+') ? str++ : 0;
	while (*str > 47 && *str < 58)
	{
		res = (res * 10) + (*str++ - 48);
		if ((arch + 1) < 0 && res > 2147483647)
			return ((int)2147483647 * sign);
		else if (res > 9223372036854775807)
			return ((sign == 1) ? -1 : 0);
	}
	return ((int)(res * sign));
}
