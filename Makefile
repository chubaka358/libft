NAME = libft.a

FUNC = *.c

FUNC_O = *.o

FLAGS = -Wall -Wextra -Werror

LIB = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FUNC)
	ar rc $(NAME) $(FUNC_O)

clean:
	/bin/rm -f $(FUNC_O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
