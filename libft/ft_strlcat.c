/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:34:21 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/11 10:59:55 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	i = 0;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (dstsize == 0)
		return (sl);
	if (dstsize <= dl)
		return (sl + dstsize);
	dstsize = dstsize - dl;
	while (dstsize > 1 && src[i])
	{
		dst[dl + i] = src[i];
		i++;
		dstsize--;
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}
/*
int main()
{
	char	serc[] = "lorem iiiiiiiiiiiii";
	char	dest[] = "Primero";
	char    dest2[] = "Primero";
	int		n = 4;
	size_t		r;

	r = strlcat(dest, serc, n);
	printf("Original:	%zu\n", r);
	printf("Buffer:		%s\n", dest);

	r = ft_strlcat(dest2, serc, n);
	printf("ft_casa:	%zu\n", r);
	printf("Buffer:		%s\n", dest2);
}
*/
