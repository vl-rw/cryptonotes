all: 
	cc -c -g encode.c
	
	cc -c -g app.c
	
	cc -o app app.c encode.o
