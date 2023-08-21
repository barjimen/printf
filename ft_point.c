/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:49:00 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/18 18:23:24 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_point(void *nb)
{
	unsigned long int	a;//es unsigned long int o long int?
	static int count;

	a = (unsigned long int)nb;
	printf("el valor de a es: %ld\n", a);
	printf("el valor de nb es: %p\n", nb);
	write(1, "0x", 2);
	count += (ft_hexa(a, "0123456789abcdef") + 2);
	return (count);
}
