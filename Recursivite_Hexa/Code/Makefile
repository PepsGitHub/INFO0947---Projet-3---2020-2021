include ../Makefile.compilation

all: $(BINARY)

$(BINARY): hexadecimal.o main-hexadecimal.o
	$(LD) -o $(BINARY) hexadecimal.o main-hexadecimal.o $(LDFLAGS)

hexadecimal.o: hexadecimal.c hexadecimal.h
	$(CC) -c hexadecimal.c -o hexadecimal.o $(CFLAGS)

main-hexadecimal.o: main-hexadecimal.c
	$(CC) -c main-hexadecimal.c -o main-hexadecimal.o $(CFLAGS)

clean:
	rm -f *.o $(BINARY)
