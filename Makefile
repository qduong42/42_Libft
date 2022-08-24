# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 20:29:17 by qduong            #+#    #+#              #
#    Updated: 2022/08/24 20:50:30 by qduong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -g
NAME = libft.a
SRCS =  ft_tolower.c ft_toupper.c ft_isalpha.c ft_isalnum.c ft_isdigit.c\
ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_atoll.c ft_memset.c ft_bzero.c\
ft_strncmp.c ft_memcpy.c ft_putchar_fd.c ft_memmove.c ft_memccpy.c\
ft_strchr.c	ft_strrchr.c ft_calloc.c ft_strdup.c\
ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_memchr.c\
ft_memcmp.c ft_isascii.c ft_isprint.c ft_putendl_fd.c ft_putstr_fd.c\
ft_strmapi.c ft_strnstr.c ft_itoa.c ft_split.c ft_put_error.c ft_atoi.c
GNL_SRCS = get_next_line_bonus.c get_next_line_utils_bonus.c
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = ${SRCS:.c=.o} #makes *.o from *.c
BONUS_OBJS = ${BONUS_SRCS:.c=.o}
GNL_OBJS = $(GNL_SRCS:.c=.o)
RM = rm -f
CC = gcc

all: $(NAME)

#.c.o:
# ${CC}	${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS} $(BONUS_OBJS) $(GNL_OBJS)
	ar rcs $(NAME) ${OBJS} $(BONUS_OBJS) $(GNL_OBJS)

clean:
	${RM} ${OBJS} $(BONUS_OBJS) $(GNL_OBJS)

fclean: clean
	${RM} $(NAME)
	$(RM) $(OBJS) $(BONUS_OBJS) $(GNL_OBJS)

re: fclean all

.PHONY:	all clean fclean re 

no:
	norminette $(SRCS) $(BONUS_SRCS)
