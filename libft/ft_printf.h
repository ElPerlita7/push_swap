/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:30:51 by abferrer          #+#    #+#             */
/*   Updated: 2025/02/20 17:23:02 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int				ft_print_char(char c);
int				ft_print_string(char *str);
int				ft_print_num(int n);
int				ft_print_num_base(unsigned long n, char *base);
int				ft_print_pointer(void *ptr);
int				ft_printf(char const *format, ...);

#endif