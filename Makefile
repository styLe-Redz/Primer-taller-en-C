GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99 -D_POSIX_C_SOURCE=199309L
MATHFLAG = -lm

PROGS = mm_main

all: $(PROGS)

mm_main:
	$(GCC) $(FLAGS) -c $@.c 
	$(GCC) $(FLAGS) -c mm_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o mm_lib.o $(MATHFLAG)
clean:
	$(RM) *.o $(PROGS)
	