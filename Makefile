SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c\
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
ft_memcpy.c  ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c\
ft_strmapi.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
ft_tolower.c ft_toupper.c ft_strncmp.c ft_strlcpy.c
BONUS = ft_lstsize.c ft_lstnew.c ft_lstmap.c ft_lstlast.c ft_lstiter.c ft_lstdelone.c \
ft_lstclear.c ft_lstadd_front.c ft_lstadd_back.c

OBJS	= $(SRCS:%.c=%.o)

BNS_OBJS = $(BONUS:%.c=%.o)

CC	= gcc

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror

ifdef WITH_BONUS
OBJS += $(BNS_OBJS)
endif

NAME	= libft.a

all	: $(NAME)

%.o	: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME)	: $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean	:
	$(RM) $(OBJS) $(BNS_OBJS)

fclean	: clean
	$(RM) $(NAME)

re	:fclean all

bonus: 
	make WITH_BONUS=1

.PHONY:	all clean fclean re
