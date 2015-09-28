/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyhook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 18:05:43 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 20:21:31 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int		leftnright(int keycode, t_data *the)
{
	if (keycode == 65363)
	{
		OLDDIRX = DIRX;
		DIRX = DIRX * cos(-ROTSPEED) - DIRY * sin(-ROTSPEED);
		DIRY = OLDDIRX * sin(-ROTSPEED) + DIRY * cos(-ROTSPEED);
		OLDPLANEX = PLANEX;
		PLANEX = PLANEX * cos(-ROTSPEED) - PLANEY * sin(-ROTSPEED);
		PLANEY = OLDPLANEX * sin(-ROTSPEED) + PLANEY * cos(-ROTSPEED);
	}
	if (keycode == 65361)
	{
		OLDDIRX = DIRX;
		DIRX = DIRX * cos(ROTSPEED) - DIRY * sin(ROTSPEED);
		DIRY = OLDDIRX * sin(ROTSPEED) + DIRY * cos(ROTSPEED);
		OLDPLANEX = PLANEX;
		PLANEX = PLANEX * cos(ROTSPEED) - PLANEY * sin(ROTSPEED);
		PLANEY = OLDPLANEX * sin(ROTSPEED) + PLANEY * cos(ROTSPEED);
	}
	return (0);
}

int		key_hook(int keycode, t_data *the)
{
	if (keycode == 65362)
	{
		if (tab((int)(POSX + DIRX * SPEED), (int)POSY) == 0)
			POSX += DIRX * SPEED;
		if (tab((int)POSX, (int)(POSY + DIRY * SPEED))== 0)
			POSY += DIRY * SPEED;
	}
	if (keycode == 65364)
	{
		if (tab((int)(POSX - DIRX * SPEED), (int)POSY) == 0)
			POSX -= DIRX * SPEED;
		if (tab((int)POSX, (int)(POSY - DIRY * SPEED)) == 0)
			POSY -= DIRY * SPEED;
	}
	leftnright(keycode, the);
	if (keycode == 65307)
		exit(0);
	line(the);
	return (0);
}
