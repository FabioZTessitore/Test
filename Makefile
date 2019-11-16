CC = gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o articolo.o

main.o: main.c articolo.h
articolo.o: articolo.c articolo.h