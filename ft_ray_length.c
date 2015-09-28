/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 21:46:18 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 18:47:19 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void		ft_ray_length(t_data *the)
{
	DELTADISTX = sqrt(1 + (RAYDIRY * RAYDIRY) / (RAYDIRX * RAYDIRX));
	DELTADISTY = sqrt(1 + (RAYDIRX * RAYDIRX) / (RAYDIRY * RAYDIRY));
	HIT = 0;
}
