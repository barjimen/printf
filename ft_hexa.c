/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:38:12 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/17 20:46:09 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexa(int nb, char *base)
{
	int	cont;

	cont = 0;
	if (nb > (int)ft_strlen(base))
	{
		ft_hexa(nb / (unsigned int)ft_strlen(base), base);
		nb = nb % (unsigned int)ft_strlen(base);
	}
	cont++;
	ft_putchar(base[nb]);
	return (cont);
}
