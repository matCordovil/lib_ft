# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: made-alm <made-alm@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 22:05:03 by made-alm          #+#    #+#              #
#    Updated: 2023/07/10 22:32:26 by made-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPILER_W_FLAGS = cc -Wall -Wextra -Werror
RM = rm -rf

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_strlcat.c ft_strchr.c ft_strlcpy.c ft_strncmp.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlen.c ft_strmapi.c ft_strnstr.c \
	ft_strrchr.c ft_substr.c ft_strtrim.c ft_tolower.c ft_toupper.c \
	ft_print_c.c ft_print_di.c ft_print_p.c ft_print_s.c ft_print_u.c \
	ft_print_xx.c ft_printf.c

BONUS_SRCS = ft_lstnew.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c \
	ft_lstadd_back ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

%.o: %.c
	@$(COMPILER_W_FLAGS) -c $< -o $@

all: $(NAME)
$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Libft was properly compiled"

bonus: $(NAME)
$(NAME) : $(OBJS) $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "Libft was properly compiled with bonus part"

clean : 
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "Minor Libft cleanse done"

fclean : clean
	@$(RM) $(NAME)
	@echo "Super Libft cleanse done"

re: fclean all

.DEFAULT_GOAL := all

.PHONY: all, bonus, clean, fclean, re

.SILENT:
