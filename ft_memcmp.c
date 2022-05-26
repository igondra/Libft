/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:51:24 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/05 13:48:54 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2 [i])
			return (str1[i] - str2 [i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char str1[] = "AndrEider";
	char str2[] = "AndrEader";
	int 	comp;
	int		comp_ft;
	size_t	size;

	size = 10;
	comp_ft = ft_memcmp(str1, str2, size);
	printf("ft_memcmp funcion: %d\n", comp_ft);
	comp = memcmp(str1, str2, size);
	printf("memcmp funcion: %d\n", comp);
	return (0);
} */
