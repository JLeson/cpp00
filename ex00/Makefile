NAME					=	megaphone

SRCDIR					=	./
INCLUDEDIR				=	./

SRCFILES				=	main.cpp

SRCS					=	$(addprefix $(SRCDIR), $(SRCFILES))

CC						=	c++
CFLAGS					=	-Wall -Wextra -Werror -std=c++98 -pedantic
RM						=	rm -f

all:					$(NAME)

$(NAME):				$(LIBDIR)$(LIBFTNAME) $(SRCS)
							$(CC) $(CFLAGS) $(SRCS) $(LIBDIR)$(LIBFTNAME) -I $(INCLUDEDIR) -o $(NAME)

clean:
							$(RM) $(NAME)

fclean:					clean

re:						fclean all

.PHONY:					all clean fclean re

