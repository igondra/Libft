/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:50:36 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/03 16:50:36 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memmove	(void *dst, const void *src, size_t len)
{
	size_t i;
	i = 0;

	if (dst > src)
	{
    	while (len--)
        	((unsigned char *)dst)[len] = ((const char *)src)[len];
	}
	else if (dst < src)
	{
		while (i < len)	
		{
			((unsigned char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/* int	main (void)
{
	char	string_src[] = "HolaHola";
	char	string_dst[] = "Agur a todos";
	char	string_ft_src[] = "HolaHola";
	char	string_ft_dst[] = "Agur a todos";
	
	printf("Funcion ft_memmove\n");
	printf("Test con source: %s		y con destino: %s\n", string_src, string_dst);
	memmove(string_dst, string_src, 4);
	ft_memmove(string_ft_dst, string_ft_src, 4);
	printf("Resultado funcion original: %s  Resultado funcion ft: %s\n", string_dst, string_ft_dst);

	return (0);
} */
