/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:38:12 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/22 00:27:39 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexa_p(long int nb, char *base)
{
	static	int	cont;

	if (nb >= (long int)ft_strlen(base))
	{
		ft_hexa_p(nb / ft_strlen(base), base);
		nb = nb % ft_strlen(base);
	}
	cont++;
	ft_putchar(base[nb]);
	return (cont);
}
