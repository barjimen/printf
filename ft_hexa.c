/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 00:28:18 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/22 00:28:19 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexa(long int nb, char *base)
{
	static	int	cont;
	unsigned int nbr;

	nbr = 0;
	if(nb < 0)
		nbr += nb;
	else
		nbr = nb;
	if (nbr >= (long int)ft_strlen(base))
	{
		ft_hexa(nbr / ft_strlen(base), base);
		nbr = nbr % ft_strlen(base);
	}
	cont++;
	ft_putchar(base[nbr]);
	return (cont);
}