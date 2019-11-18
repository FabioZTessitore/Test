CC = gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o articolo.o pagina.o

main.o: main.c articolo.h pagina.h
articolo.o: articolo.c articolo.h
pagina.o: pagina.c pagina.h articolo.h