/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:27:18 by ineiras-          #+#    #+#             */
/*   Updated: 2025/01/23 15:23:11 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../libft/libft.h"
#include <stdlib.h>

static char	*ft_swap(char *ptr)
{
	int	i;
	int j;
	char	temp;

	j = 0;
	i = ft_strlen(ptr) - 1;
	while (j < i)
	{
		temp = ptr[j];
		ptr[j] = ptr[i];
		ptr[i] = temp;
		i--;
		j++;
	}
	return (ptr);
}
static int	ft_size(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 9)
	{
		n = n / 16;
		i++;
	}
	return (i + 1);
}

static char *ft_converter(int num, char *ptr, char letter)
{
	int	temp;
	int	i;

	i = 0;
 	while (num != 0)
	{
		if (letter == 'X')
		{
			temp = num % 16;
			if (temp < 10)
				temp = temp + 48;
			else
				temp = temp + 55;
			ptr[i++] = temp;
			num = num / 16;
		}
		else if (letter == 'x')
		{
			temp = num % 16;
			if (temp < 10)
				temp = temp + 48;
			else
				temp = temp + 87;
			ptr[i++] = temp;
			num = num / 16;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

int	ft_print_hexa(int num, int counter, char letter)
{
	char	*ptr;
		
	ptr = malloc(ft_size(num) * sizeof(char));
	if (ptr == NULL)
		return (0);
	if (num == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	else
	{
		ptr = ft_converter(num, ptr, letter);
		ft_swap(ptr);
	}
	ft_putstr_fd(ptr, 1);
	counter += ft_strlen(ptr);
	free(ptr);
	return (counter);
}
