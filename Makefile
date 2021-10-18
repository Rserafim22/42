DIR_LIB = ./42

prog : ft_isalnum.o ft_isdigit.o ft_isalpha.o
	gcc -o prog ft_isalnum.o ft_isdigit.o ft_isalpha.o libft.o

libft.o : libft.h
	gcc -o libft.o -c libft.h

ft_isalnum.o : ft_isalnum.c libft.o ft_isdigit.o ft_isalpha.o
	gcc -o ft_isalnum.o -c ft_isalnum.c -Wall -Wextra -Werror

ft_isdigit.o : ft_isdigit.c
	gcc -o ft_isdigit.o -c ft_isdigit.c -Wall -Wextra -Werror

ft_isalpha.o : ft_isalpha.c
	gcc -o ft_isalpha.o -c ft_isalpha.c -Wall -Wextra -Werror
	

all: prog

clean :
	rm *.o
