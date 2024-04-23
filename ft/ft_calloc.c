/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:50:25 by eedwards          #+#    #+#             */
/*   Updated: 2024/04/18 16:15:16 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size * count)
	return (tmp);
}
