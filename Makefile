# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: widraugr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 13:07:44 by widraugr          #+#    #+#              #
#    Updated: 2018/12/04 15:34:28 by widraugr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NAMEBIN = libft

all : $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I . -c *.c 
	ar cr $(NAME) *.o
	ranlib $(NAME)
	gcc -o $(NAMEBIN) main.o -L . -l ft

clean:
	rm -f *.o 
	
fclean: clean 
	rm -f $(NAME)
	
re: fclean all 
