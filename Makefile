LIBC =    push_swap.c 
	
SRCS = ${LIBC}

SRCSALL = ${LIBC}

OBJS = ${SRCS:.c=.o}

OBJSALL = ${SRCSALL:.c=.o}

NAME = push_swap.a

CC = cc

CFLAGS = -Wall -Werror -Wextra 

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
	ar -rsc ${NAME} ${OBJS}

bonus:    ${OBJSALL}
	ar -rsc ${NAME} ${OBJSALL}

all:     ${NAME}

clean:    
	rm -f ${OBJSALL}

fclean:    clean;
	rm -f ${NAME}

re:    fclean all

.PHONY: all clean fclean re