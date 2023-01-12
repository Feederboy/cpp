NAME			=	Array

SRC				=	main.cpp    \
					

OBJ				=	$(SRC: .cpp=.o)

CXXFLAGS			=	-Wall -Wextra -Werror -std=c++98

CCXX				=	c++

all:	$(NAME)

.cpp.o:
	$(CCXX) $(CXXFLAGS) $(SRC) -c $< -o $@

$(NAME):	$(OBJ)
	$(CCXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf *o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean