/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:38:03 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/03 16:38:03 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

int	main (void)
{
	char	string_src[] = "HolaHola";
	char	string_dst[] = "Agur a todos";
	char	string_ft_src[] = "HolaHola";
	char	string_ft_dst[] = "Agur a todos";
	
	printf("Funcion ft_memcpy\n");
	printf("Test con source: %s		y con destino: %s\n", string_src, string_dst);
	memcpy(string_dst, string_src, 4);
	ft_memcpy(string_ft_dst, string_ft_src, 4);
	printf("Resultado funcion original: %s  Resultado funcion ft: %s\n", string_dst, string_ft_dst);

	return (0);
}