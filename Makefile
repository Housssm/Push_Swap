SRCS = \
	main.c \
	Indexing/indexation.c \
	Indexing/lst_manipulation.c \
	Indexing/utils.c \
	Instructions/instruction_rotate.c \
	Instructions/instruction_swap.c \
	Instructions/instruction_push.c \
	Instructions/instruction_rev_rot.c \
	Sorting/sorting_min_5.c \
	Sorting/sorting_utils.c \
	cleaning.c \
	initiation.c \
	parsing.c \
	lst_utils.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

HEADER = push_swap.h

LIBFT_DIR = ./libft
LIBFT = ${LIBFT_DIR}/libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -g3

all:     ${NAME}

${NAME}: ${LIBFT} ${OBJS}
	${CC} ${CFLAGS} ${OBJS} ${LIBFT} -o ${NAME}

${LIBFT}:				
	make -C ${LIBFT_DIR}

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -I${LIBFT_DIR} -c $< -o $@

clean:    
	rm -f ${OBJS}
	make -C ${LIBFT_DIR} clean

fclean:    clean;
	rm -f ${NAME}
	rm -f a.out
	make -C ${LIBFT_DIR} fclean

re:    fclean all

.PHONY: all clean fclean re