/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:32:16 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 09:32:16 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy (char *dst, const char *src, size_t dstsize)
{
	size_t counter;
	size_t length;

	counter = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	if (dstsize > 0)
	{
		while ((counter < (dstsize - 1)) && (src[counter] != '\0'))
		{
			dst[counter] = src[counter];
			counter++;
		}
		dst[counter] = '\0';
	}
return (length);
}

int	main (void)
{
	char	string_src[] = "HolaHola";
	char	string_dst[] = "Agur a todos";
	char	string_ft_src[] = "HolaHola";
	char	string_ft_dst[] = "Agur a todos";
	size_t	size;
	size_t	size_ft;
	
	printf("Funcion ft_strlcpy\n");
	printf("Test con source: %s		y con destino: %s\n", string_src, string_dst);
	size = strlcpy(string_dst, string_src, 5);
	size_ft = ft_strlcpy(string_ft_dst, string_ft_src, 5);
	printf("Resultado funcion original: %s  Resultado funcion ft: %s\n", string_dst, string_ft_dst);
	printf("Resultado función original size: %d	Resultado función ft size: %d\n", size, size_ft);

	return (0);
}