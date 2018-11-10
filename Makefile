CC = gcc

NAME = libft.a

LIBC_FT		=	libc_ft/ft_memset.c		\
				libc_ft/ft_bzero.c		\
				libc_ft/ft_memcpy.c		\
				libc_ft/ft_memccpy.c	\
				libc_ft/ft_memmove.c	\
				libc_ft/ft_memchr.c		\
				libc_ft/ft_memcmp.c		\
				libc_ft/ft_strlen.c		\
				libc_ft/ft_strdup.c		\
				libc_ft/ft_strcpy.c		\
				libc_ft/ft_strncpy.c	\
				libc_ft/ft_strcat.c		\
				libc_ft/ft_strncat.c	\
				libc_ft/ft_strlcat.c	\
				libc_ft/ft_strchr.c		\
				libc_ft/ft_strrchr.c	\
				libc_ft/ft_strstr.c		\
				libc_ft/ft_strnstr.c	\
				libc_ft/ft_strcmp.c		\
				libc_ft/ft_strncmp.c	\
				libc_ft/ft_atoi.c		\
				libc_ft/ft_isalpha.c	\
				libc_ft/ft_isdigit.c	\
				libc_ft/ft_isalnum.c	\
				libc_ft/ft_isascii.c	\
				libc_ft/ft_isprint.c	\
				libc_ft/ft_toupper.c	\
				libc_ft/ft_tolower.c

SUPP_FT		=	supp_ft/ft_memalloc.c	\
				supp_ft/ft_memdel.c		\
				supp_ft/ft_strnew.c		\
				supp_ft/ft_strdel.c		\
				supp_ft/ft_strclr.c		\
				supp_ft/ft_striter.c	\
				supp_ft/ft_striteri.c	\
				supp_ft/ft_strmap.c		\
				supp_ft/ft_strmapi.c	\
				supp_ft/ft_strequ.c		\
				supp_ft/ft_strnequ.c	\
				supp_ft/ft_strsub.c		\
				supp_ft/ft_strjoin.c	\
				supp_ft/ft_strtrim.c	\
				supp_ft/ft_strsplit.c	\
				supp_ft/ft_itoa.c		\
				supp_ft/ft_putchar.c	\
				supp_ft/ft_putstr.c		\
				supp_ft/ft_putendl.c	\
				supp_ft/ft_putnbr.c		\
				supp_ft/ft_putchar_fd.c	\
				supp_ft/ft_putstr_fd.c	\
				supp_ft/ft_putendl_fd.c	\
				supp_ft/ft_putnbr_fd.c

CUSTOM_FT	=	custom_ft/ft_abs.c		\
				custom_ft/ft_pow.c		\
				custom_ft/ft_strndup.c	\
				custom_ft/ft_insort.c	\
				custom_ft/ft_iswap.c	\
				custom_ft/ft_swap.c		\
				custom_ft/ft_strrev.c	\
				custom_ft/ft_tolower.c	\
				custom_ft/ft_toupper.c	\
				custom_ft/ft_isspace.c	\
				custom_ft/ft_do_op.c	\
				custom_ft/ft_ilen.c	

BONUS_FT	=	bonus_ft/ft_lstnew.c	\
				bonus_ft/ft_lstiter.c	\
				bonus_ft/ft_lstmap.c	\
				bonus_ft/ft_lstadd.c	\
				bonus_ft/ft_lstdelone.c	\
				bonus_ft/ft_lstdel.c

HEADER		=	includes

FLAGS		=	-Wall -Wextra -Werror

OPTION		=	-c -I$(HEADER)

SRCS		+=	$(LIBC_FT)
SRCS		+=	$(SUPP_FT)
SRCS		+=	$(CUSTOM_FT)
SRCS		+=	$(BONUS_FT)

OBJ			=	ft_memset.o		\
				ft_bzero.o		\
				ft_memcpy.o		\
				ft_memccpy.o	\
				ft_memmove.o	\
				ft_memchr.o		\
				ft_memcmp.o		\
				ft_strlen.o		\
				ft_strdup.o		\
				ft_strcpy.o		\
				ft_strncpy.o	\
				ft_strcat.o		\
				ft_strncat.o	\
				ft_strlcat.o	\
				ft_strchr.o		\
				ft_strrchr.o	\
				ft_strstr.o		\
				ft_strnstr.o	\
				ft_strcmp.o		\
				ft_strncmp.o	\
				ft_atoi.o		\
				ft_isalpha.o	\
				ft_isdigit.o	\
				ft_isalnum.o	\
				ft_isascii.o	\
				ft_isprint.o	\
				ft_toupper.o	\
				ft_tolower.o	\
				ft_memalloc.o	\
				ft_memdel.o		\
				ft_strnew.o		\
				ft_strdel.o		\
				ft_strclr.o		\
				ft_striter.o	\
				ft_striteri.o	\
				ft_strmap.o		\
				ft_strmapi.o	\
				ft_strequ.o		\
				ft_strnequ.o	\
				ft_strsub.o		\
				ft_strjoin.o	\
				ft_strtrim.o	\
				ft_strsplit.o	\
				ft_itoa.o		\
				ft_putchar.o	\
				ft_putstr.o		\
				ft_putendl.o	\
				ft_do_op.o		\
				ft_putnbr.o		\
				ft_putchar_fd.o	\
				ft_putstr_fd.o	\
				ft_putendl_fd.o	\
				ft_putnbr_fd.o	\
				ft_abs.o		\
				ft_pow.o		\
				ft_strndup.o	\
				ft_lstnew.o		\
				ft_lstiter.o	\
				ft_lstmap.o		\
				ft_lstadd.o		\
				ft_lstdelone.o	\
				ft_lstdel.o		\
				ft_insort.o		\
				ft_iswap.o		\
				ft_swap.o		\
				ft_strrev.o		\
				ft_tolower.o	\
				ft_isspace.o	\
				ft_toupper.o	\
				ft_ilen.o

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(OPTION) $(SRCS)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[32mlibft is ready\033[0m"

clean:
	@rm -f $(OBJ)
	@echo "\033[33mall .o files are removed\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m$(NAME) is deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re
