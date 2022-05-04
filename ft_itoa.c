/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:03:46 by marvin            #+#    #+#             */
/*   Updated: 2022/04/19 11:03:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
static int  ft_length(int n_length)
{
   int length;
 
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
 
char    *ft_itoa(int n)
{
   char    *strnum;
   int     counter;
   int     str_length;
 
   str_length = ft_length(n);
   strnum = (char *)malloc(sizeof(char) * (str_length + 1));
   if (!(strnum))
       return (NULL);
   strnum[str_length] = '\0';
   counter = 0;
   if (n < 0)
   {
       strnum[counter] = '-';
       n = n * -1;
   }
   if (n == 0)
       strnum[0] = '0';
   while (n > 0)
   {
       strnum[str_length - counter - 1] = n % 10 + '0';
       n = n / 10;
       counter++;
   }
   return (strnum);
}
 
int  main(void)
{
   int     num;
   int     i;
   char    *output;
 
   num = 123456;
   i = 0;
   output = ft_itoa(num);
   while (output[i])
   {
       write(1, &output[i], 1);
       i++;
   }
   free(output);
   return (0);
}
