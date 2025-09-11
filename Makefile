#######################################
#########      NAME      ##############
#######################################

NAME = MWF7

#######################################
######### FLAGS & COMPIL ##############
#######################################

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
MAKEFLAGS += --no-print-directory
VALGRIND = valgrind --leak-check=full --show-leak-kinds=all --trace-children=yes --track-fds=yes

#######################################
######### FILES / HEADERS #############
#######################################

HEADERS = 	include/modern_warfare_7.h		\
			include/parsing.h         		\
			include/player.h          		\
			include/raycasting.h      		\
			include/render.h          		\
			include/utils.h            		\

SOURCES = 	src/main.c						\
			src/load_render/load_struct.c	\
			src/load_render/load_window.c	\
			src/multiplayer/multiplayer.c	\
			src/parsing/check_arg.c			\
			src/parsing/check_parsing.c		\
			src/parsing/get_map.c			\
			src/parsing/load_data.c			\
			src/parsing/pars_data_line.c	\
			src/parsing/secure_load_data.c	\
			src/player/load_player.c		\
			src/render/display_map.c		\
			src/render/game_loop.c			\
			src/render/game_render.c		\
			src/render/key_pressed.c		\
			src/render/key_release.c		\
			src/render/move_player.c		\
			src/utils/compare.c				\
			src/utils/convert.c				\
			src/utils/copy.c				\
			src/utils/count.c				\
			src/utils/error.c				\
			src/utils/get_time.c			\
			src/utils/split.c				\
			src/utils/transparency.c		\
			src/utils/load_image.c			\

#######################################
#########      BUILD     ##############
#######################################

BUILD_DIR = .build/
INC_DIR = include/
INCS = -I ./$(INC_DIR)

# Generate object files from source files
OBJS = $(patsubst src/%.c,$(BUILD_DIR)%.o,$(SOURCES))
DEPS = $(OBJS:.o=.d)

#######################################
#########      RULES     ##############
#######################################

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "\n✅ $(NAME) compiled successfully!✅"

$(BUILD_DIR)%.o: src/%.c $(HEADERS) | $(BUILD_DIR)
	@mkdir -p $(dir $@)
	@echo "\t Compiling $<"
	@$(CC) $(CFLAGS) $(INCS) -MMD -MP -c $< -o $@

$(BUILD_DIR):
	@mkdir -p $@
	@echo "🛠️  Building $(NAME)...\n"

# Include dependency files
-include $(DEPS)

#######################################
#########      CLEAN     ##############
#######################################

clean:
	@$(RM) -rf $(BUILD_DIR)
	@echo " Object files cleaned"
	@echo " Object files removed"
	@echo "\n\t ✅ clean successful! ✅\n"

fclean: clean
	@$(RM) $(NAME)
	@echo " Executable removed"
	@echo "\n\t ✅ fclean successful! ✅"

re: fclean all

#######################################
#########      DEBUG     ##############
#######################################

valgrind: $(NAME)
	@echo "\n\t ⚠️  Running program!  ⚠️  \n"
	$(VALGRIND) ./$(NAME)

#######################################
#########      HELP      ##############
#######################################

help:
	@echo "Available targets:\n"
	@echo "\t all      - Build $(NAME) (default)"
	@echo "\t clean    - Remove object files"
	@echo "\t fclean   - Remove object files and executable"  
	@echo "\t re       - Clean and rebuild"
	@echo "\t valgrind - Run with valgrind"
	@echo "\t help     - Show this help\n"

.PHONY: all clean fclean re valgrind help