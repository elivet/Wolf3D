/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 16:18:50 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 19:04:06 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	line(t_data *the)
{
	int		side;

	the->X = 0;
	while (the->X < 1000)
	{
		ft_init_ray(the);
		ft_box(the);
		ft_ray_length(the);
		ft_step(the);
		side = ft_jump(the);
		ft_perpwalldist(the, side);
		line_height(the);
		pixel(the);
		the->Y = 600;
		draw(the, side);
		the->X++;
	}
}
