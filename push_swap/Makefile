NAME = pushswap
CC = cc
CFLAGES = -Wall -Wextra -Werror
FUN = ft_atoi.c ft_split.c ft_strdup.c ft_strlen.c ft_substr.c main.c\
		input_checker.c input_checker_utils1.c input_checker_utils2.c

FUNO = $(FUN:.c=.o)

all : $(NAME)

${NAME}: ${FUNO} push_swap.h Makefile
	@$(CC) $(CFLAGES) $(FUNO) -o $(NAME)

clean: 
	-rm -rf $(FUNO)

fclean: 
	-rm -rf $(NAME) $(FUNO)

re: fclean all

.PHONY: all clean fclean re
