NAME = push_swap

BONUS = checker

SRCS = push_swap.c stack.c get_numbers.c utils.c swap.c push.c\
rotate.c sort.c index.c sort_utils.c better_rotate.c optimize.c min_sort.c

BONUS_SRCS = get_numbers_bonus.c rotate_bonus.c swap_bonus.c stack_bonus.c push_bonus.c\

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

bonus: $(BONUS)

$(BONUS):
	@make bonus -C ./ft_printf
	@$(CC) $(CFLAGS) $(BONUS_SRCS) $(LIBFT) -o $(BONUS)

.PHONY: all fclean clean re