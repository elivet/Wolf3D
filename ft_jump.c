/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jump.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 22:11:14 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 18:45:35 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int		ft_jump(t_data *the)
{
	int		side;

	while (tab(MAPX, MAPY) == 0)
	{
		if (SIDEDISTX < SIDEDISTY)
		{
			SIDEDISTX += DELTADISTX;
			MAPX += STEPX;
			side = 0;
		}
		else
		{
			SIDEDISTY += DELTADISTY;
			MAPY += STEPY;
			side = 1;
		}
	}
	return (side);
}
