# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 10:05:38 by ticasali          #+#    #+#              #
#    Updated: 2025/08/04 19:49:22 by ticasali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		Modern_Warfare_7

MLXDIR		= 		mlx_linux/
MLX			=		libmlx_Linux.a

DIR_SRCS 	=		src

SRCS		=		src/main.c						\
													\
					src/load_render/load_struct.c	\
					src/load_render/load_window.c	\
													\
					src/multiplayer.c				\
													\
					src/parsing/check_arg.c			\
					src/parsing/check_parsing.c		\
					src/parsing/load_data.c			\
					src/parsing/pars_data_line.c	\
					src/parsing/secure_load_data.c	\
													\
					src/player/load_player.c		\
													\
					src/render/display_map.c		\
					src/render/game_loop.c			\
					src/render/game_render.c		\
					src/render/key_pressed.c		\
					src/render/key_release.c		\
					src/render/move_player.c		\
													\
					src/utils/compare.c				\
					src/utils/convert.c				\
					src/utils/copy.c				\
					src/utils/count.c				\
					src/utils/error.c				\
					src/utils/get_time.c			\
					src/utils/split.c				\
					src/utils/transparency.c		\

DIR_OBJS 	=		.objs

OBJS 		=		$(SRCS:$(DIR_SRCS)/%.c=$(DIR_OBJS)/%.o)

CC			=		cc

CFLAGS		= 		-Wextra -Wall -Werror

all:	$(NAME)

$(DIR_OBJS)/%.o:	$(DIR_SRCS)/%.c include/modern_warfare_7.h 
					@mkdir -p $(dir $@)
					$(CC) $(CFLAGS) -c $< -o $@ -I./include

$(NAME): $(OBJS) $(MLXDIR)$(MLX)
	$(CC) $(OBJS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

$(MLXDIR)$(MLX):
	@$(MAKE) -s -C $(MLXDIR)

clean:
	$(RM) -r $(DIR_OBJS)

fclean:	clean
	make clean -C mlx_linux/
	rm -f $(NAME)

re :	fclean all

