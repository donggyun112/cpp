NAME	= replace
CXXFLAG  = -Wall -Wextra -Werror -std=c++98
CXX		= c++

# source
# ===============================================
SRCS 								=	main \
# ===============================================

SRC_CUR	= $(addsuffix .cpp, $(SRCS))
OBJ		= $(SRC_CUR:.cpp=.o)
HEAD	= 

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
	@printf "$(Green)"
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)
	@printf "$(DEF_COLOR)"

.cpp.o :
	@printf "$(Gray)"
	$(CXX) $(CXXFLAG) -c -o $@ $<
	@printf "$(DEF_COLOR)"

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
	@printf "$(Purple)>>REBUILD<<\n"
	@$(MAKE) all

.PHONY : all
