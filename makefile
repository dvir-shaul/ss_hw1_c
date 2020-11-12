CC = gcc
FLAGS = -Wall -g

# make static library called libmyMath.a
mymaths: libmyMath.a	
libmyMath.a: basicMath.o power.o
	ar -rcs libmyMath.a basicMath.o power.o	

# make dynamic library called libmyMath.so
mymathd: libmyMath.so
libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o

# mains and maind
mains: main.o libmyMath.a
	$(CC) -Wall -g -o mains main.o libmyMath.a

maind: main.o libmyMath.so
	$(CC) -Wall -g -o maind main.o ./libmyMath.so


# all - compile program (compile only files that have changed)

all: mains maind mymathd mymaths

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

.PHONY: clean

# removing all .o,and mains/d (exeute) files
clean:
	rm -f *.o *.a *.so mains maind