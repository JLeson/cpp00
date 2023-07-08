NAME					=	phonebook

SRCDIR					=	./
INCLUDEDIR				=	./

SRCFILES				=	main.cpp		\
							Contact.cpp		\
							PhoneBook.cpp	\

SRCS					=	$(addprefix $(SRCDIR), $(SRCFILES))

CC						=	c++
CFLAGS					=	-Wall -Wextra -Werror -std=c++98 -pedantic
RM						=	rm -f

all:					$(NAME)

$(NAME):				$(SRCS)
							$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
							$(RM) $(NAME)

fclean:					clean

re:						fclean all

.PHONY:					all clean fclean re

