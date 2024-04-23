/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:29:41 by eedwards          #+#    #+#             */
/*   Updated: 2024/04/18 13:40:27 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if ((unsigned char) *s1 != (unsigned char) *s2)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		s1 = (unsigned char *)s1 + 1;
		s2 = (unsigned char *)s2 + 1;
	}
	return (0);
}
