/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:32:50 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/11 10:02:45 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*j;
	size_t			i;

	i = 0;
	j = (unsigned char *)b;
	while (len > i)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main(void)
{
   char str[50] = "Esta es una funcion muy bonica";


   printf("String original: %s\n", str);
   memset(str + 5,'$', 4);
   printf("String modificado memset:    %s\n", str);


   char str1[50] = "Esta es una funcion muy bonica";
   ft_memset(str1 + 5,'$', 4);
   printf("String modificado ft_memset: %s\n", str1);
   return(0);
}
*/
