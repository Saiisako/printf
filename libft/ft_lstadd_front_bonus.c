/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:19:21 by skock             #+#    #+#             */
/*   Updated: 2024/11/11 16:40:52 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/* // You need to make the 'next' pointer of the new element 
	point to the current first element of the list (lst),
	then update lst to point to the new element, making it 
	the new first element of the list. */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
