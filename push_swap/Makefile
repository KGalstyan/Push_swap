NAME = libftprintf.a 
CC = cc
CFLAGES = -Wall -Wextra -Werror
FUN =	

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
