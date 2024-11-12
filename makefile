NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -Iincludes -I$(LIBFT_DIR)

SRCS = srcs/ft_printf.c srcs/ft_utils.c srcs/ft_print_char.c 
       srcs/ft_print_string.c srcs/ft_print_pointer.c 
       srcs/ft_print_int.c srcs/ft_print_unsigned.c 
       srcs/ft_print_hex.c srcs/ft_print_percent.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
