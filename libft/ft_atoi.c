/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:45:58 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/06 13:11:50 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		pn;
	int		res;

	res = 0;
	i = 0;
	pn = 1;
	while (str[i] && (str[i] == '\n' || str[i] == ' '
			|| str[i] == '\t' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f'))
		i++;
	if (str[i] == '-')
	{
		pn = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	return (pn * res);
}
/*
int main()
{
    //char *s = "hola";
    //char *z = "+1234";
    char *o = "\n\t-9\f09";
    
    //char c=s;
    printf("original = %d\n",atoi(o));
    printf("ft_ = %d\n",ft_atoi(o));
}
*/
