/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igondra- <igondra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:22:31 by igondra-          #+#    #+#             */
/*   Updated: 2022/05/05 13:40:26 by igondra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return ((int)(res * sign));
}

/* int main(void)
{
	char *s = " 98764 987";

	printf("Funcion ft_atoi:%d	Funcion atoi: %d\n", ft_atoi(s), atoi(s));
	char *s1 = " --123h 1234";
	
	printf("Funcion ft_atoi:%d	Funcion atoi: %d\n", ft_atoi(s1), atoi(s1));
	char *s2 = " 	-+5834ktn";
	
	printf("Funcion ft_atoi:%d	Funcion atoi: %d\n", ft_atoi(s2), atoi(s2));
	char *s3 = " 	n123pol";
	
	printf("Funcion ft_atoi:%d	Funcion atoi: %d\n", ft_atoi(s3), atoi(s3));
	char *s4 = "-2548ht56 ";
	
	printf("Funcion ft_atoi:%d	Funcion atoi: %d\n", ft_atoi(s4), atoi(s4));
	char *s5 = "5642 123";
	
	printf("Funcion ft_atoi:%d	Funcion atoi: %d\n", ft_atoi(s5), atoi(s5));
	return (0);
} */
