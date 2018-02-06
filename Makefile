CC = g++
CFLAGS = -g -Wall

default: sad

sad: main.o Core.o sign.o
	$(CC) $(CFLAGS) -o sad main.o Core.o sign.o

clean:
	@rm -f sad *.o *~ sad.ini
