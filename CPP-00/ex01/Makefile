NAME 				=	Contact_Manager

CC					=	c++
CPPFLAGS			=	-Wall -Wextra -Werror $(VERSIONFLAG)
VERSIONFLAG			=	-std=c++98
SRC_DIR				=	./
OBJ_DIR				=	.build/
RM					=	rm -f

SRC					=	Contact.cpp \
						PhoneBook.cpp \
						main.cpp

OBJS 			=	$(patsubst $(SRC_DIR)%.cpp,$(OBJ_DIR)%.o, $(SRC))

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CPPFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

bonus: all

clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

clear:
	clear

.PHONY = all bonus clean fclean re
