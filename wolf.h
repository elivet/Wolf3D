/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elivet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 12:02:56 by elivet            #+#    #+#             */
/*   Updated: 2014/01/19 20:35:45 by elivet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H

# define mapWidth 18
# define mapHeight 22
# define SPEED 0.2
# define ROTSPEED 0.2

# define POSX the->posX
# define POSY the->posY
# define DIRX the->dirX
# define DIRY the->dirY
# define PLANEX the->planeX
# define PLANEY the->planeY
# define CAMX the->cameraX
# define RAYPOSX the->rayposX
# define RAYPOSY the->rayposY
# define RAYDIRX the->raydirX
# define RAYDIRY the->raydirY
# define SIDEDISTX the->sidedistX
# define SIDEDISTY the->sidedistY
# define STEPX the->stepX
# define STEPY the->stepY
# define DELTADISTX the->deltadistX
# define DELTADISTY the->deltadistY
# define MAPX the->mapX
# define MAPY the->mapY
# define SIDE the->side
# define HIT the->hit
# define PERPWALLDIST the->perpwalldist
# define DRAWSTART the->drawstart
# define DRAWEND the->drawend
# define TIME the->time
# define OLDTIME the->oldtime
# define LINEHEIGHT the->lineHeight
# define OLDDIRX the->oldDirX
# define OLDPLANEX the->oldPlaneX
# define MLX mlx
# define WIN win
# define X e->x
# define Y e->y

# include <mlx.h>
# include <unistd.h>
# include <math.h>
# include <stdlib.h>
# include <stdio.h>


typedef struct		s_env
{
	int		x;
	int		y;
}					t_env;

typedef struct		s_data
{
	void		*mlx;
	void		*win;
	double		posX;
	double		posY;
	double		dirX;
	double		dirY;
	double		planeX;
	double		planeY;
	double		time;
	double		oldtime;
	double		cameraX;
	double		rayposX;
	double		rayposY;
	double		raydirX;
	double		raydirY;
	int			stepX;
	int			stepY;
	double		sidedistX;
	double		sidedistY;
	int			mapX;
	int			mapY;
	double		deltadistX;
	double		deltadistY;
	int			hit;
	int			side;
	double		perpwalldist;
	int			drawstart;
	int			drawend;
	int			lineHeight;
	double		oldDirX;
	double		oldPlaneX;
	t_env		*e;
}					t_data;


void		line(t_data *the);
void		ft_init(t_data *the);
void		ft_init_ray(t_data *the);
void		ft_step(t_data *the);
void		ft_perpwalldist(t_data *the, int side);
void		ft_box(t_data *the);
void		line_height(t_data *the);
void		pixel(t_data *the);
void		ft_ray_length(t_data *the);
int			key_hook(int keycode, t_data *the);
int			expose_hook(t_data *the);
int			ft_jump(t_data *the);
int			tab(int x, int y);
int			leftnright(int keycode, t_data *the);
void		draw(t_data *the, int side);

#endif /* !WOLF_H */
