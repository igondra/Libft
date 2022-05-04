/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:43:19 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 10:43:19 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr (const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}

int	main(void)
{
	const char str[] = "AndrEider";
	int 	coincidence;
	char	*solution;
	char	*solution_ft;
	size_t	size;

	size = 10;
	coincidence = 'd'; // Funciona sin tener que sumar + 256
	solution = ft_memchr(str, coincidence, size);
	printf("ft_memchr funcion: %s\n", solution);
	solution_ft = memchr(str, coincidence, size);
	printf("memchr funcion: %s\n", solution_ft);
	return (0);
}
