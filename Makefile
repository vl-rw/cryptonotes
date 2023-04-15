all: 
	cc -c -g encode.c
	
	cc -c -g program.c
	
	cc -o program program.o encode.o
