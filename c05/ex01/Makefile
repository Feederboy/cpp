NAME			=	Brainz

SRC				=	main.cpp    \
					Bureaucrat.cpp	\
					Form.cpp
					

OBJ				=	$(SRC: .cpp=.o)

FLAG			=	-Wall -Wextra -Werror -std=c++98

CC				=	c++

all:	$(NAME)

.cpp.o:
	$(CC) $(FLAG) $(SRC) -c $< -o $@

$(NAME):	$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf *o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean