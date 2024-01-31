NAME				=	zoo

CC					=	c++
CPPFLAGS			=	-Wall -Wextra -Werror $(VERSIONFLAG)
VERSIONFLAG			=	-std=c++98
DBFLAGS				=	-g -g3
SRC_DIR				=	./
OBJ_DIR				=	.build/
DEP_FILES			=	Makefile
RM					=	rm -f

CPP_SRC				=	$(addprefix $(SRC_DIR), \
						Animal.cpp \
						Brain.cpp \
						Cat.cpp \
						Dog.cpp \
						main.cpp \
						WrongAnimal.cpp \
						WrongCat.cpp \
						)

OBJS				=	$(patsubst $(SRC_DIR)%.cpp,$(OBJ_DIR)%.o, $(CPP_SRC))

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(DEP_FILES)
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CPPFLAGS) -c -o $@ $<

$(NAME): $(OBJS) $(DEP_FILES)
	@echo "\e[36mMaking $(NAME)...\e[0m"
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "\e[32mDone !\e[0m"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "\e[31mObject files removed.\e[0m"

fclean:	clean
	@$(RM) $(NAME)
	@echo "\e[31m$(NAME) removed.\e[0m"

re:		fclean all

clear:
	clear

.PHONY = all clean fclean re
