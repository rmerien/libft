/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:41:42 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/09 02:43:38 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list        *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list    *sortie;

    if (lst)
    {
        sortie = f(lst);
        sortie->next = ft_lstmap(lst->next, f);
        return (sortie);
    }
    return (NULL);
}
