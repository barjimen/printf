/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:38:12 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/18 19:37:17 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexa(long int nb, char *base)
{
	static	int	cont;
	
	printf("%ld es en hexa\n", nb);
	if (nb >= (long int)ft_strlen(base))
	{
		ft_hexa(nb / ft_strlen(base), base);
		nb = nb % ft_strlen(base);
	}
	cont++;
	ft_putchar(base[nb]);
	return (cont);
}
