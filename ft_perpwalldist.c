/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perpwalldist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 23:34:01 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 18:48:19 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void		ft_perpwalldist(t_data *the, int side)
{
	if (side == 0)
		PERPWALLDIST = fabs((MAPX - RAYPOSX + (1 - STEPX) / 2) / RAYDIRX);
	else
		PERPWALLDIST = fabs((MAPY - RAYPOSY + (1 - STEPY) / 2) / RAYDIRY);
}
