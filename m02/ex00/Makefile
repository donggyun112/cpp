NAME	= Fixed
CXXFLAG   = -Wall -Wextra -Werror -std=c++98
CXX		= c++

# source
# ===============================================
SRCS 								=	Fixed \
										main \
# ===============================================

SRC_CUR	= $(addsuffix .cpp, $(SRCS))
OBJ		= $(SRC_CUR:.cpp=.o)
HEAD	= Fixed.hpp

Black   =\033[0;30m
Red     =\033[0;31m
Green   = \033[0;32m
Yellow  =\033[0;33m
Blue    =\033[0;34m
Purple  =\033[0;35m
Cyan    =\033[0;36m
White   =\033[0;37m
Gray    = \033[0;90m
Pink    = \033[0;35m
DEF_COLOR = \033[0;39m


all : $(NAME)

$(NAME) : $(OBJ) $(HEAD)
	@echo "\033[1;32mCompilation complete.\033[0m $(NAME) has been created."
	@$(CXX) $(CXXFLAG) -I $(HEAD) $(OBJ) -o $(NAME)


.cpp.o :
	@echo "\033[1;34mCompiling $<...\033[0m"
	@$(CXX) $(CXXFLAG) -I $(HEAD) -c -o $@ $<


clean : 
	@rm -rf *.o
	@printf "$(LF) $(Cyan)Cleaning... $(White) $(OBJ) \n$(DEF_COLOR) \b"

fclean : clean
	@rm -rf $(NAME)
	@printf "$(LF) $(Red)Cleaning... $(White)$(NAME) \n"

re	:
	@$(MAKE) fclean
	@sleep 0.5
	@clear
	@printf "$(Purple)>>REBUILD<<\n$(DEF_COLOR)"
	@$(MAKE) all

.PHONY : all
