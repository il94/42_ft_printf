NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB = -L src/libft -lft

LIBPATH = src/libft

SRCPATH = src/

SRC = ft_printf.c \
	convert_ph.c \
	convert_ph_p.c \
	flags.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(MAKE) -C $(LIBPATH) bonus
	ar rc $(NAME) $^

%.o : %.c
	$(CC) $(CFLAGS) -c $^

bonus : all

clean :
	$(MAKE) -C $(LIBPATH) clean
	rm -f $(OBJ)

fclean : clean
	$(MAKE) -C $(LIBPATH) fclean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus