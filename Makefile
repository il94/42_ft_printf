NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCPATH = src/
SRC = ft_printf.c \
	convert_flag.c \
	p_convert_flag.c \
	flags.c
OBJ = $(SRC:.c=.o)

LIBPATH = src/libft/
SRCLIB = $(LIBPATH)ft_atoi.c \
	$(LIBPATH)ft_bzero.c \
	$(LIBPATH)ft_calloc.c \
	$(LIBPATH)ft_isalnum.c \
	$(LIBPATH)ft_isalpha.c \
	$(LIBPATH)ft_isascii.c \
	$(LIBPATH)ft_isdigit.c \
	$(LIBPATH)ft_isprint.c \
	$(LIBPATH)ft_itoa.c \
	$(LIBPATH)ft_memchr.c \
	$(LIBPATH)ft_memcmp.c \
	$(LIBPATH)ft_memcpy.c \
	$(LIBPATH)ft_memmove.c \
	$(LIBPATH)ft_memset.c \
	$(LIBPATH)ft_putchar_fd.c \
	$(LIBPATH)ft_putendl_fd.c \
	$(LIBPATH)ft_putnbr_fd.c \
	$(LIBPATH)ft_putstr_fd.c \
	$(LIBPATH)ft_split.c \
	$(LIBPATH)ft_strchr.c \
	$(LIBPATH)ft_strdup.c \
	$(LIBPATH)ft_striteri.c \
	$(LIBPATH)ft_strjoin.c \
	$(LIBPATH)ft_strlcat.c \
	$(LIBPATH)ft_strlcpy.c \
	$(LIBPATH)ft_strlen.c \
	$(LIBPATH)ft_strmapi.c \
	$(LIBPATH)ft_strncmp.c \
	$(LIBPATH)ft_strnstr.c \
	$(LIBPATH)ft_strrchr.c \
	$(LIBPATH)ft_strtrim.c \
	$(LIBPATH)ft_substr.c \
	$(LIBPATH)ft_tolower.c \
	$(LIBPATH)ft_toupper.c \
	$(LIBPATH)ft_lstnew_bonus.c \
	$(LIBPATH)ft_lstadd_front_bonus.c \
	$(LIBPATH)ft_lstsize_bonus.c \
	$(LIBPATH)ft_lstlast_bonus.c \
	$(LIBPATH)ft_lstadd_back_bonus.c\
	$(LIBPATH)ft_lstdelone_bonus.c \
	$(LIBPATH)ft_lstclear_bonus.c \
	$(LIBPATH)ft_lstiter_bonus.c \
	$(LIBPATH)ft_lstmap_bonus.c
OBJLIB = $(SRCLIB:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(OBJLIB)
	ar rcs $(NAME) $^ 

%.o : $(SRCPATH)%.c
	$(CC) $(CFLAGS) -c $^

clean :
	rm -f $(OBJ)
	rm -f $(OBJLIB)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re