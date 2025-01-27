/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:05:36 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/23 15:47:49 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "../libft/libft.h"
#include "printf.h"

int	ft_format(va_list args, char *str, int count)
{
		if (*str == 'c')
			count = ft_printchar((char)va_arg(args, int), count);
		else if (*str == 's')
			count = ft_print_string(va_arg(args, char*), count);
		else if (*str == 'p')
			count = ft_print_ptr((unsigned long long)va_arg(args, void *), count);
		else if (*str == 'd' || *str == 'i')
			count = ft_print_number(va_arg(args, int), count);
		else if (*str == 'u')
			count = ft_print_unsigned_number((unsigned int)va_arg(args, int), count);
		else if (*str == 'x' || *str == 'X')
			count = ft_print_hexa(va_arg(args, int), count, *str);
		else if (*str == '%')
			count = ft_printchar(*str, count);
		return (count);
}

int	ft_printf(char const *str, ...)
{
	int	count;
	va_list	args;
	
	if (!str)
		return (0);
	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%') // No se que tengo que hacer en caso de que aparezca indiv.
		{
			str++;
			if (ft_strchr("cspdiuxX%" , *str))
			{
				count = ft_format(args, (char *)str, count);
				str++;
			}
		}
		else
		{
			count = ft_printchar(*str, count);
			str++;
		}
	}
	va_end(args);

	printf("\nEl numero de letras impresas es: %d\n", count);
	return (count - 1);
}

int	main(void)
{
	char ptr[] = "Papi";
	char ptr2[] = "Mami";
	printf("\nMi resultado\n");
	ft_printf("Hola %s, se que hoy has cumplido %d años. %p, %p","Sergio", 24, &ptr,&ptr2);
	// Por alguna razón la Ñ y la ñ me cuentan como dos carácteres diferentes.
	printf("\nResultdo de Printf(original\n");
	printf("Primer test: %p, Segundo test: %p es un 100%%l", &ptr, &ptr2);
	
	return (0);
}
