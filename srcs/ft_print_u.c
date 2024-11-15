/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:18:49 by skock             #+#    #+#             */
/*   Updated: 2024/11/15 19:44:54 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static void	ft_putchar(unsigned int c)
{
	write(1, &c, 1);
}

int	ft_print_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_print_unsigned(nb / 10);
		ft_print_unsigned(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar('0' + nb);
	count ++;
	return (count);
}
