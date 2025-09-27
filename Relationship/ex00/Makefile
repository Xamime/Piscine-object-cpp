# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: your_name <you@example.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/13                              #+#    #+#              #
#    Updated: 2025/09/13                              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du programme
NAME        := my_program

# Compilateur et flags
CXX         := c++
CXXFLAGS    := -g -Wall -Wextra -Werror -std=c++98

# Fichiers sources et objets (dans le dossier courant)
SRCS        := $(wildcard *.cpp)
OBJS        := $(SRCS:.cpp=.o)

# Couleurs (optionnel)
GREEN := \033[0;32m
RED := \033[0;31m
RESET := \033[0m

# Règle par défaut
all: $(NAME)

# Édition de lien
$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Compilation terminée : $(NAME)$(RESET)"

# Nettoyage des fichiers objets
clean:
	@rm -f $(OBJS)
	@echo "$(RED)Fichiers objets supprimés$(RESET)"

# Nettoyage complet
fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Binaire supprimé$(RESET)"

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re
