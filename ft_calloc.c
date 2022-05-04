/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:35:50 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/04 11:35:50 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc (size_t count, size_t size)
{
	void	*dest;
 
	dest = malloc(sizeof(size) * count);
	if (!dest)
		return (NULL);
	memset(dest, 0, size * count);
	return (dest);
}

/* int	main(void)
{
	size_t	count1;
	size_t	size1;
	char	*lol;
	char	*lol_ft;

	count1 = 3;
	size1 = 4;
	printf("Funcion calloc: %s	Funcion ft_calloc: %s", calloc(count1, size1), ft_calloc(count1, size1));
} */
