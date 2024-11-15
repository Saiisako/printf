/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:30:51 by skock             #+#    #+#             */
/*   Updated: 2024/11/15 19:46:46 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static void	ft_putchar(unsigned int c)
{
	write(1, &c, 1);
}

int	ft_print_c(unsigned char c)
{
	ft_putchar(c);
	return (1);
}
