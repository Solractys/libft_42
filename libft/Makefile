NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

OBJDIR = objs
SRCDIR = src

SRC =	ft_atoi.c	\
		ft_bzero.c	\
		ft_calloc.c	\
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c 	\
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c\
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

SRCS = $(addprefix $(SRCDIR)/, $(SRC))

OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -I ./ -c $< -o $@

$(OBJDIR):
	@echo "Criando diretório de objetos"
	@mkdir -p $(OBJDIR)

clean:
	@echo "Removendo diretório de objetos: $(OBJDIR)"
	@rm -rf $(OBJDIR)

fclean:clean
	@echo "Removendo lib: $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
