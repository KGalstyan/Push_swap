NAME = push_swap
BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
FUN = ft_atoi.c ft_split.c ft_strdup.c ft_substr.c\
		input_checker.c input_checker_utils1.c input_checker_utils2.c\
		fill_stack.c ft_lstadd_back.c ft_lstadd_front.c ft_lstnew.c\
		ft_lstsize.c sort.c do_swap.c do_revers_rotate.c do_push.c\
		utils.c do_rotate.c sort_2.c sorting_main.c push_back.c 

BON = get_next_line.c get_next_line_utils.c checker_program.c ft_strcmp.c

FUNO = $(FUN:.c=.o)

BONO = $(BON:.c=.o)

all : $(NAME)

${NAME}: ${FUNO} push_swap.h Makefile
	@$(CC) $(CFLAGS) main.c $(FUNO) -o $(NAME)

bonus:${BONO} ${FUNO}
	@$(CC) $(CFLAGS) $(FUNO) $(BONO) -o $(BONUS)

clean: 
	-rm -rf $(FUNO) main.o

fclean: 
	-rm -rf $(NAME) $(FUNO) $(BONO) $(BONUS) main.o

re: fclean all

.PHONY: all clean fclean re bonus
