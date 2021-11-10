## compiler definition
## choice of compiler
CC = gcc
## ccompliler flags
CCFLAGS = -O3
## linking flag (-lm for math library)
LDFLAGS = -lm

##make
##target:prerequisites
##all - creates what is listed
##$(CC) corresponds to CC defined above i.e. gcc
##$(LDFLAGS) corresponds to LDFLAGS above i.e. -lm
##$^ - all the prerequisites i.e. main.o mm.o
##$< - first prerequisite i.e. main.c or mm.c
## $@ name of target being generated i.e. mmc

all: mmc 

## linking
mmc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o mmc main.o mm.o $(LDFLAGS)     


## compiling
mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) mm.c

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

#remove all files that end with .o
clean:
	rm *.o


