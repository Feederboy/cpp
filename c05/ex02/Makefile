NAME=Bureaucrat

CCXX=c++

OBJDIR = obj

CXXFLAGS=-Wall -Wextra -Werror -std=c++98

PATHS= $(OBJDIR)/srcs

SRC				=	main.cpp    \
					Bureaucrat.cpp	\
					Form.cpp		\
					ShrubberyCreationForm.cpp \
					PresidentialPardonForm.cpp \
					RobotomyRequestForm.cpp

INCFLAGS=-I.

RM=rm -rf

OBJ=$(SRC:%.cpp=$(OBJDIR)/%.o)


$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CCXX) $(CXXFLAGS) $(INCFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CCXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR) :
	mkdir $(OBJDIR) $(PATHS)

all: $(NAME)

clean:
	$(RM) $(OBJ) 
fclean: clean
	$(RM) $(NAME) $(OBJDIR)

re: fclean all

.PHONY: clean fclean