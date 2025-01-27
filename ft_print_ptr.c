/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:48:49 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/23 16:01:24 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"

static int	ft_hex_size(unsigned long long n)
{
	int	size;

	size = 1;
	if (n == 0)
		return(size);
	while (n != 0)
	{
		n = n / 16;
		size++;
	}
	return (size);
}

static char	ft_hex_dict(int num)
{
	char	*hex_dict;
	char	hex_num;

	hex_dict = "0123456789abcdef\0";
	hex_num = hex_dict[num];
	return(hex_num);
}

static char *ft_swap_elements(char *ptr)
{
	int		i;
	int		len;
	char	temp;

	i = 2;
	len = ft_strlen(ptr) - 1;
	while (i < len)
	{
		temp = ptr[i];
		ptr[i] = ptr[len];
		ptr[len] = temp;
		i++;
		len--;
	}
	return (ptr);
}
int	ft_print_ptr(unsigned long long addres, int counter)
{
	char				*ptr;
	int					i;

	i = 2;
	ptr = malloc(ft_hex_size(addres) * sizeof(char));
	if (!ptr)
		return (0);
	ptr[0] = '0';
	ptr[1] = 'x';
	while (addres != 0)
	{
		ptr[i] = ft_hex_dict(addres % 16);
		addres = addres / 16;
		i++;
	}
	ptr[i] = '\0';
	counter += ft_strlen(ptr);
	ft_swap_elements(ptr);
	ft_putstr_fd(ptr, 1);
	free(ptr);

	return (counter);
}
