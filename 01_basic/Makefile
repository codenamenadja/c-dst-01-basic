CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -c
.DEFALT_GOAL		:= all
NAME				= dst_basic.a

SOURCES				= $(wildcard srcs/ft_*.c)
HEADERS				= $(wildcard includes/*.h)
OBJECTS				= $(patsubst %.c, %.o, $(SOURCES))
TESTS				= $(wildcard tests/srcs/*.c)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

.PHONY: test
test: $(TESTS)
	$(CC) -Werror -Wextra -Wall -Iincludes tests/tests.c $^ $(NAME) -o tests/test.out
	./tests/test.out
	/bin/rm -f tests/test.out

.PHONY: clean
clean:
	/bin/rm -f $(OBJECTS)
	/bin/rm -f tests/*.out

.PHONY: fclean
fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft_*.a

.PHONY: re
re: fclean all

