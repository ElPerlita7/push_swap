/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:29:50 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/01 01:50:32 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	ft_strlen2(char *str)
{
	unsigned long	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_format(char i, va_list arg)
{
	int	count;

	count = 0;
	if (i == '%')
		count += ft_print_char('%');
	if (i == 'c')
		count += ft_print_char(va_arg(arg, int));
	if (i == 'd' || i == 'i')
		count += ft_print_num(va_arg(arg, int));
	if (i == 's')
		count += ft_print_string(va_arg(arg, char *));
	if (i == 'x')
		count += ft_print_num_base(va_arg(arg, unsigned int),
				"0123456789abcdef");
	if (i == 'X')
		count += ft_print_num_base(va_arg(arg, unsigned int),
				"0123456789ABCDEF");
	if (i == 'u')
		count += ft_print_num_base(va_arg(arg, unsigned int), "0123456789");
	if (i == 'p')
		count += ft_print_pointer(va_arg(arg, void *));
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	arg;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count += ft_format(format[i], arg);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
// #include "stdio.h"
// int main()
// {
// 	unsigned int hola = 9834567;
// 	void *kl = &hola;
// 	ft_printf("\n%x\n%u\n%X\n%p\n", hola, hola, hola, kl);
// 	printf("\n%x\n%u\n%X\n%p\n", hola, hola, hola, kl);

// 	return (0);
// }
