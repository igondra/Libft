/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:42:31 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/05 14:08:04 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	dst_length;
	size_t	counter;

	counter = 0;
	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= dst_length)
	{
		return (dstsize + src_length);
	}
	while (counter < (dstsize - 1 - dst_length) && (src[counter] != '\0'))
	{
		dst[dst_length + counter] = src[counter];
		counter++;
	}
	dst[dst_length + counter] = '\0';
	return (dst_length + src_length);
}

/* int	main (void)
{
	char	string_src[] = "HolaHola";
	char	string_dst[] = "Agur a todos";
	char	string_ft_src[] = "HolaHola";
	char	string_ft_dst[] = "Agur a todos";
	size_t	size;
	size_t	size_ft;
	
	printf("Funcion ft_strlcpy\n");
	printf("Test con source: %s		y con destino: \\
	%s\n", string_src, string_dst);
	size = strlcat(string_dst, string_src, 17);
	size_ft = ft_strlcat(string_ft_dst, string_ft_src, 17);
	printf("Resultado funcion original: %s  Resultado \\
	funcion ft: %s\n", string_dst, string_ft_dst);
	printf("Resultado función original size: %d	Resultado \\
	función ft size: %d\n", size, size_ft);

	char	string1_src[] = "HolaHola";
	char	string1_dst[] = "Agur a todos";
	char	string1_ft_src[] = "HolaHola";
	char	string1_ft_dst[] = "Agur a todos";
	size_t	size1;
	size_t	size1_ft;
	
	printf("Funcion ft_strlcpy\n");
	printf("Test con source: %s		y con destino: \\
	%s\n", string1_src, string1_dst);
	size1 = strlcat(string1_dst, string1_src, 5);
	size1_ft = ft_strlcat(string1_ft_dst, string1_ft_src, 5);
	printf("Resultado funcion original: %s  Resultado \\
	funcion ft: %s\n", string1_dst, string1_ft_dst);
	printf("Resultado función original size: %d	Resultado \\
	función ft size: %d\n", size1, size1_ft);

	return (0);
} */
