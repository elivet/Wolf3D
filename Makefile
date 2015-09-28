# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elivet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/11 12:05:13 by elivet            #+#    #+#              #
#    Updated: 2014/01/19 19:02:06 by elivet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= wolf3D

FLAGS= -Wall -Wextra -Werror

SRC= main.c ft_keyhook.c ft_expose_hook.c ft_init.c \
	 ft_init_ray.c ft_box.c ft_ray_length.c ft_step.c ft_jump.c \
	 ft_perpwalldist.c ft_line_height.c ft_pixel.c ft_line.c ft_draw.c

OBJ= main.o ft_keyhook.o ft_expose_hook.o ft_init.o \
	 ft_init_ray.o ft_box.o ft_ray_length.o ft_step.o ft_jump.o \
	 ft_perpwalldist.o ft_line_height.o ft_pixel.o ft_line.o ft_draw.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -g
	gcc -o $(NAME) $(OBJ) -L/usr/X11/lib -lX11 -lmlx -lXext

%.o: %.c
	gcc $(FLAGS) -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
