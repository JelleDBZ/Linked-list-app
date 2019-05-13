# Creating var
CC=g++

CFLAGS=-c -Wall -Ilib
	# -c only compile, no linking

# Name of binary
EXECUTABLE=world

all: clean $(EXECUTABLE)

$(EXECUTABLE): main.o bull.o linkedlist.o node.o
	$(CC) main.o bull.o linkedlist.o node.o -o $(EXECUTABLE)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
bull.o: bull.cpp
	$(CC) $(CFLAGS) bull.cpp
linkedlist.o: linkedlist.cpp
	$(CC) $(CFLAGS) linkedlist.cpp
node.o: node.cpp
	$(CC) $(CFLAGS) node.cpp

clean:
	rm -rf *.o $(EXECUTABLE)