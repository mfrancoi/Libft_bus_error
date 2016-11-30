# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfrancoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 16:24:10 by mfrancoi          #+#    #+#              #
#    Updated: 2016/11/25 18:20:22 by mfrancoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c\
	   ft_isalnum.c\
	   ft_isalpha.c\
	   ft_isascii.c\
	   ft_isdigit.c\
	   ft_isprint.c\
	   ft_putchar.c\
	   ft_putchar_fd.c\
	   ft_putendl.c\
	   ft_putendl_fd.c\
	   ft_putnbr.c\
	   ft_putnbr_fd.c\
	   ft_putstr.c\
	   ft_putstr_fd.c\
	   ft_strlen.c\
	   ft_tolower.c\
	   ft_strcmp.c\
	   ft_strdup.c\
	   ft_toupper.c\
	   ft_strcat.c\
	   ft_strncat.c\
	   ft_strchr.c\
	   ft_strcpy.c\
	   ft_strlcat.c\
	   ft_strncmp.c\
	   ft_strstr.c\
	   ft_strnstr.c\
	   ft_strncpy.c\
	   ft_strnew.c\
	   ft_strrchr.c\
	   ft_strdel.c\
	   ft_strclr.c\
	   ft_striter.c\
	   ft_striteri.c\
	   ft_strmap.c\
	   ft_strmapi.c\
	   ft_strequ.c\
	   ft_strnequ.c\
	   ft_strsub.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_strsplit.c\
	   ft_itoa.c\
	   ft_memcmp.c\
	   ft_memset.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_memccpy.c\
	   ft_memalloc.c\
	   ft_memdel.c\
	   ft_bzero.c\
	   ft_memchr.c\
	   ft_putstr_fd.c\
	   ft_wnbr.c\
	   ft_lnbr.c\
	   ft_swap.c\

OBJS = ft_atoi.o\
	   ft_isalnum.o\
	   ft_isalpha.o\
	   ft_isascii.o\
	   ft_isdigit.o\
	   ft_isprint.o\
	   ft_putchar.o\
	   ft_putchar_fd.o\
	   ft_putendl.o\
	   ft_putendl_fd.o\
	   ft_putnbr.o\
	   ft_putnbr_fd.o\
	   ft_putstr.o\
	   ft_putstr_fd.o\
	   ft_strlen.o\
	   ft_tolower.o\
	   ft_strcmp.o\
	   ft_strdup.o\
	   ft_toupper.o\
	   ft_strcat.o\
	   ft_strncat.o\
	   ft_strchr.o\
	   ft_strcpy.o\
	   ft_strlcat.o\
	   ft_strncmp.o\
	   ft_strstr.o\
	   ft_strnstr.o\
	   ft_strncpy.o\
	   ft_strnew.o\
	   ft_strrchr.o\
	   ft_strclr.o\
	   ft_strdel.o\
	   ft_striter.o\
	   ft_striteri.o\
	   ft_strmap.o\
	   ft_strequ.o\
	   ft_strnequ.o\
	   ft_strmapi.o\
	   ft_strsub.o\
	   ft_strjoin.o\
	   ft_strtrim.o\
	   ft_strsplit.o\
	   ft_itoa.o\
	   ft_memcmp.o\
	   ft_memset.o\
	   ft_memcpy.o\
	   ft_memmove.o\
	   ft_memccpy.o\
	   ft_memalloc.o\
	   ft_memdel.o\
	   ft_bzero.o\
	   ft_memchr.o\
	   ft_putstr_fd.o\
	   ft_wnbr.o\
	   ft_lnbr.o\
	   ft_swap.o\


GCC = gcc -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	@$(GCC) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all