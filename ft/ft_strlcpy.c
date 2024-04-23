/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:09:29 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/17 16:12:08 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count ++;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
#include <stdio.h>

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			*src;
	char			dest[50];
	unsigned int	size;

	size = 7;
	src = "Hellocanyouhearme";
	size = ft_strlcpy(dest, src, size);
	printf("size is %d\n", size);
	printf("%s\n", dest);
}
*/
