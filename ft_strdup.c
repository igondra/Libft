/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:46:39 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 11:46:39 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup (const char *s1)
{
	int		cont;
	char	*s1_new;
	int		size;

	size = ft_strlen(s1);
	s1_new = malloc(sizeof(char) * size + 1);
	if (!s1_new)
		return (NULL);  
	cont = 0;
	while(s1[cont] != '\0')
	{
		s1_new[cont] = s1[cont];
		cont++;
	}
	s1_new[cont] = s1[cont];
	return (s1_new);
}

/* int	main(void)
{
	char	*str1 = "Kaixo Agur";
	char	*str_dup;

	printf("Funcion strdup = %s	Funcion ft_strdup = %s", strdup(str1), ft_strdup(str1));
} */
