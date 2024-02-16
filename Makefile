NAME = libft.a

CC= gcc
CFLAGS = -Wall -Wextra -Werror

DEPS = ${OBJS:.o=.d}

INC = ./includes/libft.h

SRC_PATH = ./srcs

SRCS = ft_isascii.c ft_memset.c ft_strdup.c ft_strtrim.c ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_substr.c ft_atoi.c ft_isprint.c \
	ft_putendl_fd.c ft_tolower.c ft_bzero.c ft_strlcat.c ft_memchr.c ft_putnbr_fd.c ft_strlcpy.c ft_toupper.c ft_calloc.c ft_memcpy.c \
	ft_putstr_fd.c ft_strlen.c ft_isalnum.c ft_memmove.c ft_split.c ft_strncmp.c ft_isalpha.c ft_strchr.c ft_strrchr.c ft_memcmp.c\

SRC = $(addprefix $(SRC_PATH)/, $(SRCS))

#OBJ = $(SRC:.c=.o)
OBJS_PATH = ./objs
OBJS_NAMES = $(SRC:.c=.o)

OBJ := $(patsubst $(SRC_PATH)%,%,$(filter $(SRC_PATH)%,$(OBJS_NAMES)))

OBJS = $(addprefix $(OBJS_PATH), $(OBJ))

GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m
YELLOW = \033[33m

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\

BONUS_SRC = $(addprefix $(SRC_PATH)/, $(BONUS_SRCS))

BONUS_OBJS_NAMES = $(BONUS_SRC:.c=.o)
#BONUS_OBJ = $(BONUS_SRC:.c=.o)

BONUS_OBJ = $(patsubst $(SRC_PATH)%,%,$(filter $(SRC_PATH)%,$(BONUS_OBJS_NAMES)))

BONUS_OBJS = $(addprefix $(OBJS_PATH), $(BONUS_OBJ))

$(NAME): $(OBJS) $(INC)
	@ar -rcs -o $(NAME) $(OBJS)
	@echo "$(GREEN)Compilation complete! \n$(YELLOW)$(NAME) is ready to execute.$(NC)"

all: $(OBJS) $(BONUS_OBJS) $(INC)
	@ar -rcs -o $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "$(GREEN)Compilation complete! \n$(YELLOW)$(NAME) is ready to execute with bonuses.$(NC)"

$(OBJS): $(OBJS_PATH)/%.o: $(SRC_PATH)/%.c $(INC)
	@mkdir -p $(OBJS_PATH)
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@
	@echo "$(GREEN)Compiled:$(NC) $<"

$(BONUS_OBJS): $(OBJS_PATH)/%.o: $(SRC_PATH)/%.c $(INC)
	@mkdir -p $(OBJS_PATH)
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@
	@echo "$(GREEN)Compiled:$(NC) $<"
	
clean:
	@rm -rf $(OBJS_PATH)
	@rm -rf $(DEPS)
	@echo "$(RED)Cleaned up object files.$(NC)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Cleaned up executable.$(NC)"

re: fclean all

bonus: $(BONUS_OBJS) $(INC)
	@ar -rcs -o $(NAME) $(BONUS_OBJS)
	@echo "$(GREEN)Compilation complete! \n$(YELLOW)$(NAME) is ready to execute only with bonuses.$(NC)"

-include $(DEPS)

.PHONY: all clean fclean re bonus
