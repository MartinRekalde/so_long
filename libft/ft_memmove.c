/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:40:10 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/11 10:01:06 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s)
		return (dst);
	if (s < d && s + len > d)
	{
		s += len;
		d += len;
		while (len--)
			*(--d) = *(--s);
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
/*
int	main()
{
	char dst[] = "oldstring";
	const char src[]  = "newstring";

	printf("Before memmove dst = %s, src = %s\n", dst, src);
	memmove(dst, src, 9);
	printf("After memmove dst = %s, src = %s\n", dst, src);
	ft_memmove(dst, src, 9);
	printf("After ft_memmove dst = %s, src = %s\n", dst, src);
	return(0);
}
*/
