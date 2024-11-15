/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:42:08 by skock             #+#    #+#             */
/*   Updated: 2024/11/15 16:47:03 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"

int	ft_print_X_or_x(unsigned long nb, char *format);
int	ft_print_c(unsigned char c);
int	ft_print_s(char *str);
int	ft_print_i_or_d(signed int nb);
int	ft_print_u(unsigned int nb);
int	ft_print_p(unsigned long nb); //, char *format)

#endif