/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:50:30 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 09:50:30 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/* int main(void)
{
	int c;

	c = 'a';
	printf("Letra original:%c	Letra en minuscula:%c\n", c, ft_tolower(c));
	c = 'A';
	printf("Letra original:%c	Letra en minuscula:%c\n", c, ft_tolower(c));
	c = 't';
	printf("Letra original:%c	Letra en minuscula:%c\n", c, ft_tolower(c));
	c = 'T';
	printf("Letra original:%c	Letra en minuscula:%c\n", c, ft_tolower(c));
	c = '3';
	printf("Letra original:%c	Letra en minuscula:%c\n", c, ft_tolower(c));
	return (0);
} */
