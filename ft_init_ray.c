/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_ray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 21:04:45 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 18:46:54 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void		ft_init_ray(t_data *the)
{
	CAMX = 2 * the->X / (double)1000 - 1;
	RAYPOSX = POSX;
	RAYPOSY = POSY;
	RAYDIRX = DIRX + PLANEX * CAMX;
	RAYDIRY = DIRY + PLANEY * CAMX;
}
