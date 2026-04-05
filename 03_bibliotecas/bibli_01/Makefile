all: createobjs execute clean

createobjs: main.c esfera_utils.c
	gcc -c *.c

execute: esfera_utils.o main.o
	gcc *.o -o prog 

clean: 
	rm -rf *.o prog