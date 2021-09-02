NAME = push_swap
HEAD = -I./includes/ -I./libft/includes

CFLAGS = -Wall -Werror -Wextra

SRCS =  srcs/main.c \
		srcs/init.c \
		srcs/push.c \
		srcs/swap.c \
		srcs/init2.c \
		srcs/rotate.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	clang -g $(HEAD) $(OBJS) -o $(NAME) -L./libft -lft

G: $(OBJS)
	make -C ./libft
	clang -g3 -fsanitize=address $(HEAD) $(OBJS) -o $(NAME) -L./libft -lft

clean:
	rm -rf $(OBJS) objs
	make clean -sC libft

fclean:
	make fclean -sC libft
	rm -rf $(NAME) $(OBJS)

re:	fclean
	make all
