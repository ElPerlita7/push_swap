/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:40:50 by abferrer          #+#    #+#             */
/*   Updated: 2025/02/20 17:24:56 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_num(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_print_char('-');
		if (n == -2147483648)
		{
			count += ft_print_char('2');
			n = 147483648;
		}
		else
			n = -n;
	}
	if (n >= 10)
	{
		count += ft_print_num(n / 10);
	}
	count += ft_print_char((n % 10) + '0');
	return (count);
}

int	ft_print_num_base(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= ft_strlen(base))
	{
		count += ft_print_num_base(n / ft_strlen(base), base);
	}
	n = n % ft_strlen(base);
	count += ft_print_char(base[n]);
	return (count);
}

int	ft_print_string(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (ft_print_string("(null)"));
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}

int	ft_print_pointer(void *ptr)
{
	if (ptr == NULL)
		return (ft_print_string("(nil)"));
	ft_print_string("0x");
	return (ft_print_num_base((unsigned long)ptr, "0123456789abcdef") + 2);
}
// int main()

// {
// 	// char str1[] = "HOLA KELOKE";

// 	// int	hello = ft_putstr(str1);
// 	// printf("\n%d\n", hello);

// 	char *n = "hola";
// 	int	i = printf("\n%s", n);
// 	printf("%d", i);
// 	// felix la tiene chic
// 	return (0);
// }
