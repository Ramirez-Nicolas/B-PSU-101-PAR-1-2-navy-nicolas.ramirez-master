SRC = process_info.c	\
      kill_it.c		\
      navy.c

OBJ = $(SRC:.c=.o)

NAME = navy

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) -W -Wall -Wextra -Werror

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

rm : fclean all

.PHONY: all clean fclean re
