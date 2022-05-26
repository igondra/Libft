/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:03:46 by marvin            #+#    #+#             */
/*   Updated: 2022/05/26 15:48:21 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n_length)
{
	int	length;

	length = 1;
	while (n_length / 10 != 0)
	{
		length++;
		n_length = n_length / 10;
	}
	if (n_length < 0)
		length = length + 1;
	return (length);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	int		counter;
	int		str_length;
	long	nb;

	nb = n;
	str_length = ft_length(nb);
	strnum = (char *)malloc(sizeof(char) * (str_length + 1));
	if (!(strnum))
		return (NULL);
	strnum[str_length] = '\0';
	counter = 0;
	if (nb < 0)
	{
		strnum[counter] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		strnum[0] = '0';
	while (nb > 0)
	{
		strnum[str_length - counter++ - 1] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (strnum);
}

/* int	main(void)
{
	int		num;
	int		i;
	char	*output;

	num = -123456;
	i = 0;
	output = ft_itoa(num);
	while (output[i])
	{
		write(1, &output[i], 1);
		i++;
	}
	free(output);
	return (0);
} */
