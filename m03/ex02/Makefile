NAME	= FragTrap
CXXFLAG   = -Wall -Wextra -Werror -std=c++98
CXX		= c++

# source
# ===============================================
SRCS 								=	ClapTrap \
										main \
										ScavTrap \
										FragTrap
# ===============================================

SRC_CUR	= $(addsuffix .cpp, $(SRCS))
OBJ		= $(SRC_CUR:.cpp=.o)
HEAD	= ClapTrap.hpp	ScavTrap.hpp FragTrap.hpp

Black   =\033[0;30m
Red     =\033[1;31m
Green   = \033[0;32m
Yellow  =\033[0;33m
Blue    =\033[0;34m
Purple  =\033[4;35m
Cyan    =\033[1;36m
White   =\033[0;37m
Gray    = \033[0;90m
Pink    = \033[0;35m
DEF_COLOR = \033[0;39m


all : $(NAME)

$(NAME) : $(OBJ) $(HEAD)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)
	@echo "\033[1;32mCompilation complete. $(NAME) has been created.\033[0m"


.cpp.o : $(HEAD)
	$(CXX) $(CXXFLAG) -c -o $@ $<
	@echo "\033[1;34mCompiling $<...\033[0m"
clean : 
	@rm -rf *.o
	@printf "$(LF) $(Cyan)Cleaning... $(White)$(OBJ) \n$(DEF_COLOR) \b"

fclean : clean
	@rm -rf $(NAME)
	@printf "$(LF) $(Red)Cleaning... $(White)$(NAME) \n"

re	:
	@$(MAKE) fclean
	@sleep 0.5
	@clear
	@printf "$(DEF_COLOR)$(Purple)>>REBUILD<<$(DEF_COLOR)\n"
	@$(MAKE) all

.PHONY : all
