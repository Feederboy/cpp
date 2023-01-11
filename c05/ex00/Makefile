NAME=Bureaucrat

CCXX=c++

OBJDIR = obj

CXXFLAGS=-Wall -Wextra -Werror -std=c++98

PATHS= $(OBJDIR)/srcs

SRC				=	main.cpp    \
					Bureaucrat.cpp	\

INCFLAGS=-I.

RM=rm -rf

OBJ=$(SRC:%.cpp=$(OBJDIR)/%.o)

deps	:= $(patsubst %.o,%.d,$(OBJ))
-include $(deps)
DEPFLAGS = -MMD -MF $(@:.o=.d)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CCXX) $(CXXFLAGS) $(INCFLAGS) -c $< $(DEPFLAGS) -o $@

$(NAME): $(OBJ)
	$(CCXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR) :
	mkdir $(OBJDIR) $(PATHS)

all: $(NAME)

clean:
	$(RM) $(OBJ) $(deps)
fclean: clean
	$(RM) $(NAME) $(OBJDIR)

re: fclean all

.PHONY: clean fclean
