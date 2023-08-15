/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:36:51 by barjimen          #+#    #+#             */
/*   Updated: 2023/08/03 17:36:59 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>


int	calcularPromedioRec(int cantidad, va_list numeros)
{
	if(cantidad == 0)
		return 0;
	int numero = va_arg(numeros, int);
	int sumaRestante = calcularPromedioRec(cantidad - 1, numeros);
	return numero + sumaRestante;
}

int calcularPromedio(int cantidad, ...)
{
	va_list numeros;
	va_start(numeros, cantidad);
	int suma = calcularPromedioRec(cantidad, numeros);
	va_end(numeros);
	int	promedio = suma /cantidad;
	return	promedio;
}

int	main(){
	int	promedio = calcularPromedio(5,2,8,6,1,3);
	printf("El promedio es: %d\n", promedio);
	return(0);
}
