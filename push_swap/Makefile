NAME = pushswap
CC = cc
CFLAGS = -Wall -Wextra -Werror
FUN = ft_atoi.c ft_split.c ft_strdup.c ft_strlen.c ft_substr.c main.c\
		input_checker.c input_checker_utils1.c input_checker_utils2.c\
		fill_stack.c ft_lstadd_back.c ft_lstadd_front.c ft_lstnew.c\
		ft_lstsize.c sort.c do_swap.c do_revers_rotate.c do_push.c\
		utils.c do_rotate.c sort_2.c

FUNO = $(FUN:.c=.o)

all : $(NAME)

${NAME}: ${FUNO} push_swap.h Makefile
	@$(CC) $(CFLAGS) $(FUNO) -o $(NAME)

clean: 
	-rm -rf $(FUNO)

fclean: 
	-rm -rf $(NAME) $(FUNO)

re: fclean all

.PHONY: all clean fclean re
