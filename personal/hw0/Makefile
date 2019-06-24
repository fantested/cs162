CC=gcc -std=c99
CFALGS=I
binaries=main map wc

all:
	$(CC) wc.c -g -o wc
	$(CC) map.c -g -o map
	$(CC) main.c -g -o main
clean:
	rm -f $(binaries) *.o
	echo "Cleaning done."
