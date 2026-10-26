# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/25 20:11:35 by amfarrej          #+#    #+#              #
#    Updated: 2026/10/26 22:02:36 by amfarrej         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
#we call it using $(NAME) when needed
#$() : search for a variable to search the file inside it

CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isascii.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c
#here we put all the libft functions in one variable, so we can apply a rule for all of them at once

OBJS = $(SRCS:.c=.o)
#Take every .c in SRCS and replace .c with .o

all: $(NAME)
$(NAME) : $(OBJS)
#name is the target, and it depends on the .o files which are objs
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
#Whenever you need a .o, you can create it from the corresponding .c
	$(CC) $(CFLAGS) -c $< -o $@

#< is the first prerequisite (the .c file)
#@ is the target (the .o file)
#-c : compile the .c file into an object file
#-o : specify the name of the output file
#When I ask for all, make sure libft.a exists and is up to date

clean:
#clean up the .o files
	rm -f $(OBJS)
fclean: clean
#clean up the .o files and the libft.a file
	rm -f $(NAME)
re: fclean all
#rebuild everything from scratch
#make.PHONY: clean