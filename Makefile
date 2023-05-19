CC=gcc

main: main.c queue.c stack.c
	$(CC) -o $@ $^ 

clean:
	rm -f *.o main

