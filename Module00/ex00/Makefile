.PHONY:
	all fclean re

TARGET	=	megaphone
OS		=	$(shell uname)

ifeq ($(OS), Linux)
CC		=	g++
else ifeq ($(OS), Darwin)
CC		=	clang++
else
$(error cannot setup proper compiler)
endif

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic
RM		=	rm -rf
SRC		=	megaphone.cpp

$(TARGET):	$(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(TARGET)

all: $(TARGET)

fclean:
	$(RM) $(TARGET)

re:		fclean all
