/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:33:09 by eedwards          #+#    #+#             */
/*   Updated: 2024/04/26 11:33:58 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    *nbr;

    nbr = ft_itoa(n);
    ft_putstr_fd(nbr, fd);
}