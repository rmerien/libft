# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 18:25:59 by rmerien           #+#    #+#              #
#    Updated: 2018/09/19 22:33:09 by rmerien          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

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

BONUS_FT	=	bonus_ft/ft_lstnew.c	\
				bonus_ft/ft_lstdelone.c	\
				bonus_ft/ft_lstdel.c	\
				bonus_ft/ft_lstadd.c	\
				bonus_ft/ft_lstiter.c	\
				bonus_ft/ft_lstmap.c

SRCS		=	$(LIBC_FT)				\
				$(SUPP_FT)				\
				$(BONUS_FT)				

OBJS		=	$(SRC:%.c=%.o)

INC			=	-Iincludes

CC      	=	cc

CFLAGS  	+=	-c -Wall -Werror -Wextra -Iincludes

RM			=	rm -f

all			:
		@make $(NAME)

$(NAME)		:	$(OBJS)
		$(CC) $(SRCS)
		ar rc $(NAME) $(OBJS)
		@echo "libft.a created √√"

$(OBJS)		:	$(SRCS)
		$(CC) $(SRCS)
		@echo "OBJS created √√"

clean		:
		$(RM) $(OBJS)
		@echo "OBJS cleared √√"

fclean		:	clean
		$(RM) $(NAME)
		@echo "libft.a cleared √√"

re		:	fclean all
