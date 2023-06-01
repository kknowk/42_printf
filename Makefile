NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCL = ft_printf.h
SRCS = libftprintf_main.c ft_conversions.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c $(INCL)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCL)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
