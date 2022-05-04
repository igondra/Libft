/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:50:30 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 09:50:30 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/* int main(void)
{
	int c;

	c = 'a';
	printf("Letra original:%c	Letra en mayuscula:%c\n", c, ft_toupper(c));
	c = 'A';
	printf("Letra original:%c	Letra en mayuscula:%c\n", c, ft_toupper(c));
	c = 't';
	printf("Letra original:%c	Letra en mayuscula:%c\n", c, ft_toupper(c));
	c = 'T';
	printf("Letra original:%c	Letra en minuscula:%c\n", c, ft_tolower(c));
	c = '3';
	printf("Letra original:%c	Letra en mayuscula:%c\n", c, ft_toupper(c));
	return (0);
} */
