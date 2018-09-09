/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 18:10:40 by rmerien           #+#    #+#             */
/*   Updated: 2018/09/08 21:18:27 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	(void) ac;

	char abc;
	ft_putchar(abc = atoi(av[1]));
	ft_putchar('\n');
	printf("%d\n", abc);
	return (0);
}

