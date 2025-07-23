CC = gcc
CFLAGS = -Wall -g
TARGET = calculator

all: $(TARGET)

$(TARGET): main.o calculator.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o calculator.o

main.o: main.c calculator.h
	$(CC) $(CFLAGS) -c main.c

calculator.o: calculator.c calculator.h
	$(CC) $(CFLAGS) -c calculator.c

clean:
	rm -f *.o $(TARGET) test/test_runner

test: calculator
	$(CC) -o test/test_runner test/test_calculator.c calculator.o
	./test/test_runner