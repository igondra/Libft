/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:48:19 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/05 14:03:57 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}

/* int	main (void)
{
	int c;
	
	c = 'c';
	printf("Funcion ft_isalpha\n");
	if (ft_isalpha(c) == isalpha(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));
	c = 'M';
	if (ft_isalpha(c) == isalpha(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));
	c = 'Z';
	if (ft_isalpha(c) == isalpha(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));
	c = '0';
	if (ft_isalpha(c) == isalpha(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));
	c = '+';
	if (ft_isalpha(c) == isalpha(c))
		printf("Test con %c: OK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));
	else
		printf("Test con %c: NOK		Resultado funcion original: %d \\
		Resultado funcion ft: %d\n", c, isalpha(c), ft_isalpha(c));	
} */
