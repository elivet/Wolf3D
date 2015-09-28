/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/19 18:58:26 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 19:02:22 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void		draw(t_data *the, int side)
{
	while (the->Y > 0)
	{
		if (the->Y < the->drawstart)
			mlx_pixel_put(the->MLX, the->WIN, the->X, the->Y, 0xffffff);
		else if (the->Y >= the->drawstart && the->Y < the->drawend)
		{
			if (side == 1 && RAYDIRY < 0)
				mlx_pixel_put(the->MLX, the->WIN, the->X, the->Y, 0xc6357e);
			else if (side == 0 && RAYDIRX < 0)
				mlx_pixel_put(the->MLX, the->WIN, the->X, the->Y, 0xCDDE47);
			else if (side == 0 && RAYDIRX > 0)
				mlx_pixel_put(the->MLX, the->WIN, the->X, the->Y, 0xFDD131);
			else
				mlx_pixel_put(the->MLX, the->WIN, the->X, the->Y, 0x5EB6DD);
		}
		else
			mlx_pixel_put(the->MLX, the->WIN, the->X, the->Y, 0xb7a292);
		the->Y--;
	}
}
