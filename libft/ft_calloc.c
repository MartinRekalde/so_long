/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:11:47 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/04 13:48:14 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	void	*ptr;

	n = count * size;
	ptr = malloc(n);
	if (ptr != NULL)
		ft_memset(ptr, 0, n);
	return (ptr);
}
/*
int	main()
{
	int	*arr = ft_calloc(5, sizeof(int));
	int i = 0;

	if (arr != NULL)
	{
		while (i < 5)
		{
			printf("%d ", arr[i]);
			i++;
		}
		free(arr);
	}
	else
		printf("Memory allocation failed.\n");
	return 0;
}
*/
