NAME = Span
SRCS = main.cpp
OBJDIR_SRCS = obj
OBJS = $(addprefix $(OBJDIR_SRCS)/,$(SRCS:.cpp=.o))
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

all: $(NAME)

$(OBJDIR_SRCS):
	@mkdir -p $(OBJDIR_SRCS)

$(OBJDIR_SRCS)/%.o: %.cpp | $(OBJDIR_SRCS)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@$(RM) -rf $(OBJDIR_SRCS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
