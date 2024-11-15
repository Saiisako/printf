/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X_or_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:01:52 by skock             #+#    #+#             */
/*   Updated: 2024/11/15 16:51:58 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	ft_putchar(char c)
{
	return (write(1, &c, 1)); // return 1 car la fonction s'est effectuée.
}
int	ft_print_X_or_x(unsigned long nb, char *format)
{
	int	count;
	
	count = 0;
	if (nb >= 16)
	{
		count += ft_print_X_or_x(nb / 16, format);
		count += ft_print_X_or_x(nb % 16, format);
	}
	else
	{
		if (*format == 'X')
			count += ft_putchar("0123456789ABCDEF"[nb % 16]);
		else
			count += ft_putchar("0123456789abcdef"[nb % 16]);
	}
	return (count);
}
