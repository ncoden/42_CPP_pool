# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 18:00:49 by ncoden            #+#    #+#              #
#    Updated: 2015/06/16 19:50:07 by ncoden           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

# COMPILATION
CC = clang++
CCFLAGS = -Wall -Werror -Wextra

LNK = clang++
LNKFLAGS =

# DIRECTORIES
LIBDIR = lib
SRCDIR = .
OBJDIR = obj
INCDIR = includes

# SOURCES
LIB =
SRC = phonebook.cpp\
	Phonebook.class.cpp\
	Contact.class.cpp

# **************************************************************************** #

# ALLOWED EXTENSIONS
EXTENSIONS = .cpp

# SPECIAL CHARS
LOG_CLEAR		= \033[2K
LOG_UP 			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# **************************************************************************** #

.PHONY: all $(NAME) build clean fclean re dev
.SILENT:

LIBS = $(addprefix $(LIBDIR)/, $(LIB))

SRC := $(filter $(addprefix %, $(EXTENSIONS)), $(SRC))
SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCS_DIRS = $(addsuffix /, $(INCDIR))
INCS_DIRS += $(addsuffix /, $(dir $(LIBS)))
INCS = $(addprefix -I , $(INCS_DIRS))

all: $(NAME)
$(NAME): build $(LIBS) $(OBJS)
	$(LNK) -o $(NAME) $(LIBS) $(OBJS) $(INCS) $(LNKFLAGS)
	echo "$(LOG_CLEAR)$(NAME)... compiled $(LOG_GREEN)✓$(LOG_NOCOLOR)"
build:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJS_DIRS)
clean:
	rm -f $(LIBS)
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

dev: $(NAME)
	./$(NAME)

$(LIBDIR)/%.a:
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$@$(LOG_NOCOLOR)$(LOG_UP)"
	make -s -C $(@D) 2> /dev/null
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(CC) -c -o $@ $< $(INCS) $(CCFLAGS)
