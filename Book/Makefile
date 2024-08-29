NAME = library
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = Book.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	c++ $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re

