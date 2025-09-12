# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 10:05:38 by ticasali          #+#    #+#              #
#    Updated: 2025/09/13 01:38:49 by ticasali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		Modern_Warfare_7

MLXDIR		= 		mlx_linux/
MLX			=		libmlx_Linux.a

DIR_SRCS 	=		src				\
					src/game		\
					src/home		\
					src/load_game	\
					src/multiplayer	\
					src/parsing		\
					src/player		\
					src/raycasting	\
					src/setting		\
					src/solo		\
					src/turbolibx	\
					src/utils		\

SRCS		=		src/main.c							\
														\
					src/game/display_map.c				\
					src/game/game_loop.c				\
					src/game/game_render.c				\
					src/game/key_pressed.c				\
					src/game/key_release.c				\
														\
					src/home/home_button.c				\
					src/home/home_loop.c				\
					src/home/home_render.c				\
					src/home/load_home.c				\
					src/home/mouse_input_home.c			\
														\
					src/load_game/load_struct.c			\
					src/load_game/load_window.c			\
					src/load_game/load_input.c			\
														\
					src/multiplayer/multiplayer.c		\
														\
					src/parsing/check_arg.c				\
					src/parsing/check_parsing.c			\
					src/parsing/get_map.c				\
					src/parsing/load_data.c				\
					src/parsing/pars_data_line.c		\
					src/parsing/secure_load_data.c		\
														\
					src/player/load_player.c			\
					src/player/move_player.c			\
														\
					src/raycasting/raycasting.c			\
														\
					src/setting/keyboard_input_setting.c\
					src/setting/setting_loop.c			\
					src/setting/setting_button.c		\
					src/setting/setting_button_render.c	\
					src/setting/setting_render.c		\
					src/setting/load_setting.c			\
					src/setting/scrolling_system.c		\
					src/setting/mouse_input_setting.c	\
					src/setting/mouse_release_setting.c	\
														\
					src/solo/solo_loop.c				\
					src/solo/solo_render.c				\
					src/solo/load_solo.c				\
					src/solo/mouse_input_solo.c			\
					src/solo/solo_button.c				\
														\
					src/turbolibx/animation_frame.c		\
					src/turbolibx/draw_line.c			\
					src/turbolibx/load_animation.c		\
					src/turbolibx/load_font.c			\
					src/turbolibx/load_image.c			\
					src/turbolibx/mlx_putkey_code.c		\
					src/turbolibx/mlx_putnbr.c			\
					src/turbolibx/mlx_putstr.c			\
					src/turbolibx/reset_window.c		\
					src/turbolibx/transparency.c		\
														\
					src/utils/compare.c					\
					src/utils/convert.c					\
					src/utils/copy.c					\
					src/utils/count.c					\
					src/utils/error.c					\
					src/utils/get_time.c				\
					src/utils/print.c					\
					src/utils/split.c					\

DIR_OBJS 	=		.objs

OBJS 		=		$(SRCS:$(DIR_SRCS)/%.c=$(DIR_OBJS)/%.o)

CC			=		cc

CFLAGS		= 		-Wextra -Wall -Werror -g3 -O3

all:	$(NAME)

$(DIR_OBJS)/%.o:	$(DIR_SRCS)/%.c modern_warfare_7.h
					@mkdir -p $(dir $@)
					$(CC) $(CFLAGS) -c $< -o $@ -I ./include

$(NAME): $(OBJS) $(MLXDIR)$(MLX)
	$(CC) $(OBJS) -g3 -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

$(MLXDIR)$(MLX):
	@$(MAKE) -s -C $(MLXDIR)

clean:
	$(RM) -r $(DIR_OBJS)

fclean:	clean
	make clean -C mlx_linux/
	rm -f $(NAME)

re :	fclean all

