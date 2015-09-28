/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:30:01 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 20:33:38 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void		ft_init(t_data *the)
{
	POSX = 16.5;
	POSY = 20.5;
	DIRX = -1;
	DIRY = 0;
	PLANEX = 0;
	PLANEY = 0.66;
	TIME = 0;
	OLDTIME = 0;
}
