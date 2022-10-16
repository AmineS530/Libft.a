CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a

PT1 = ft_atoi.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_isdigit.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_isalnum.c \
		ft_memchr.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_memcmp.c \
		ft_strdup.c \
		ft_strnstr.c \

PT2 = ft_putchar_fd.c \
		ft_striteri.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_split.c \

CFILES = $(PT1) $(PT2)

AR = ar rcs

OBJECTS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	$(AR) $@ $^

bonus :

%.o : %.c libft.h
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm -rf $(OBJECTS) $(bonus_obj)

fclean : clean
	rm -rf $(NAME)

re : fclean all
