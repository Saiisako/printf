/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:18:53 by skock             #+#    #+#             */
/*   Updated: 2024/11/15 16:45:43 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long nb)//, char *format)
{
	int	len;
	
	write(1, "0x", 2);
	len = ft_print_hexa(nb, "x");
	return (len + 2);
}
