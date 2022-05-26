/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:20:00 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/05 14:05:20 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/* int	main (void)
{
	int c;
	
	c = 'c';
	printf("Funcion ft_isdigit\n");
	if (ft_isdigit(c) == isdigit(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));
	c = 'M';
	if (ft_isdigit(c) == isdigit(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));
	c = '8';
	if (ft_isdigit(c) == isdigit(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));
	c = '0';
	if (ft_isdigit(c) == isdigit(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));
	c = '+';
	if (ft_isdigit(c) == isdigit(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isdigit(c), ft_isdigit(c));	
} */
