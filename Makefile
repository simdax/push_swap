FILES = main.c utils.c
CC = gcc
FLAGS = -g

all:
	$(CC)  $(FLAGS) $(FILES) -o push_swap
