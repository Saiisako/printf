/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:18:51 by skock             #+#    #+#             */
/*   Updated: 2024/11/15 16:51:53 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
int	ft_print_s(char *str)
{
	int				count;
	unsigned int	i;
	
	i = 0;
	count = 0;
	while(str[i])
		count += ft_putchar(str[i++]);
	printf("\n%d\n", count);
	return (count);
}
