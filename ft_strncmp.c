/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:26:03 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 10:26:03 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp (const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i] );
		i++;
	}
	return (0);
}

int	main(void)
{
	char str1[] = "AndrEider";
	char str2[] = "AndrElder";
	int 	comp;
	int		comp_ft;
	size_t	size;

	size = 10;
	comp_ft = ft_strncmp(str1, str2, size);
	printf("ft_strncmp funcion: %d\n", comp_ft);
	comp = strncmp(str1, str2, size);
	printf("strncmp funcion: %d\n", comp);
	return (0);
}