NAME = libft.a
SRC =	*.c
OBJECTS = *.o
INCLUDES = libft.h

all : $(NAME)
$(NAME):
		gcc  -Wall -Wextra -Werror -c $(SRC) -I $(INCLUDES)
		ar rc libft.a $(OBJECTS) 
		ranlib libft.a
clean : 
		/bin/rm -f $(OBJECTS)
fclean:clean
		/bin/rm -f $(NAME)
re: fclean all

.PHONY: re fclean clean all
