NAME = push_swap

SRCS = push_swap.c stack.c get_numbers.c utils.c swap.c push.c\
rotate.c sort.c index.c sort_utils.c test.c

LIBFT = ./ft_printf/libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@make bonus -C ./ft_printf
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

clean:
	@make fclean -C ./ft_printf

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re