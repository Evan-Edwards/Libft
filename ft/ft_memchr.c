/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:05:03 by eedwards          #+#    #+#             */
/*   Updated: 2024/04/18 13:27:20 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*str;

	cc = c;
	str = (unsigned char *) s;
	while (*str && n != 0)
	{
		if (*str == cc)
			return ((void *)str);
		str++;
		n--;
	}
	if (cc == '\0')
		return ((void *)str);
	return (NULL);
}
/* the memchr() function locates the first occurence of c (convered to an 
unsigned char) in string s. The n parameter tells how many bytes we want to 
search in (necessary because there's no terminating character)*/
