NAME = pushswap.a
CC = cc
CFLAGES = -Wall -Wextra -Werror
FUN = input_checer.c \
		input_checer_utils.c \
		main.c 

FUNO = $(FUN:.c=.o)

all : $(NAME)

$(FUNO)%.o: $(FUN)%.c
	$(CC) $(CFLAGS) -c $< -o

$(NAME): $(FUNO)
	ar -rcs $(NAME) $(FUNO)

clean: 
	-rm -rf $(FUNO)

fclean: 
	-rm -rf $(NAME) $(FUNO)

re: fclean all

.PHONY: all clean fclean re
