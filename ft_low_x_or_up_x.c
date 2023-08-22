/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_low_x_or_up_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:59:32 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/22 18:08:03 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_low_x_or_up_x(char x, unsigned long int nb)
{
	if (x == 'x')
		return (ft_hexa(nb, "0123456789abcdef"));
	else if (x == 'X')
		return (ft_hexa(nb, "0123456789ABCDEF"));
	return (0);
}
