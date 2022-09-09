NAME = push_swap

BONUS = checker

SRCS = push_swap.c stack.c get_numbers.c utils.c swap.c push.c\
rotate.c sort.c index.c sort_utils.c better_rotate.c optimize.c min_sort.c

BONUS_SRCS = get_numbers_bonus.c rotate_bonus.c swap_bonus.c stack_bonus.c push_bonus.c\
./get_next_line/get_next_line.c ./get_next_line/get_next_line_utils.c utils_bonus.c\
checker_bonus.c sort_utils_bonus.c

LIBFT = ./ft_printf/libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRCS)
	@make bonus -C ./ft_printf
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

clean:
	@make fclean -C ./ft_printf

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(BONUS)

re: fclean all

bonus: $(BONUS)

<<<<<<< HEAD
$(BONUS): $(BONUS_SRCS)
=======
$(BONUS):
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
	@make bonus -C ./ft_printf
	@$(CC) $(CFLAGS) $(BONUS_SRCS) $(LIBFT) -o $(BONUS)

.PHONY: all fclean clean re