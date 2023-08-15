/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:10:26 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/15 18:31:24 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbru(unsigned long long nbr)//casteamos a unsigned y ademas lo gestionamos en base 10
{
	if (nbr < 10)
	{	
		ft_putchar(nbr + 48);
		return (1);
	}
	else
		ft_putnbr(nbr / 10);
	ft_putnbr(nbr % 10);
	return(0);
}	
