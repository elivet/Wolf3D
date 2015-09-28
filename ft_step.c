/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_step.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 21:57:34 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 18:47:51 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void		ft_step(t_data *the)
{
	if (RAYDIRX < 0)
	{
		STEPX = -1;
		SIDEDISTX = (RAYPOSX - MAPX) * DELTADISTX;
	}
	else
	{
		STEPX = 1;
		SIDEDISTX = (MAPX + 1.0 - RAYPOSX) * DELTADISTX;
	}
	if (RAYDIRY < 0)
	{
		STEPY = -1;
		SIDEDISTY = (RAYPOSY - MAPY) * DELTADISTY;
	}
	else
	{
		STEPY = 1;
		SIDEDISTY = (MAPY + 1.0 - RAYPOSY) * DELTADISTY;
	}
}
