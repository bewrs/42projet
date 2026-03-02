NAME = libgnl.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = get_next_line.c utiles.c
OBJS = $(SRCS:.c=.o)
TEST_NAME = test_gnl
TEST_OBJS = test.o $(OBJS)
MAIN_NAME = main_gnl
MAIN_OBJS = main.o $(OBJS)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

test: $(TEST_NAME)

$(TEST_NAME): $(TEST_OBJS)
	$(CC) $(CFLAGS) $(TEST_OBJS) -o $(TEST_NAME)

main: $(MAIN_NAME)

$(MAIN_NAME): $(MAIN_OBJS)
	$(CC) $(CFLAGS) $(MAIN_OBJS) -o $(MAIN_NAME)

%.o: %.c get_next_line.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(MAIN_OBJS)

fclean: clean
	rm -f $(NAME) $(TEST_NAME) $(MAIN_NAME)

re: fclean all

.PHONY: all test main clean fclean re
