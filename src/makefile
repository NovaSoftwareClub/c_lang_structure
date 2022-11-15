all: compile_all

compile_all: main.o device.o
	gcc -o main main.o device.o

main.o: main.c device.h
	gcc -c -o main.o main.c

device.o: device.c device.h
	gcc -c -o device.o device.c

clean:
	rm -f main *.o