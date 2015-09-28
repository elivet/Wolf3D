/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 15:07:33 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 19:12:50 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void		pixel(t_data *the)
{
	DRAWSTART = -LINEHEIGHT / 2 + 600 / 2;
	if (DRAWSTART < 0)
		DRAWSTART = 0;
	DRAWEND = LINEHEIGHT / 2 + 600 / 2;
	if (DRAWEND >= 600)
		DRAWEND = 600 - 1;
}
