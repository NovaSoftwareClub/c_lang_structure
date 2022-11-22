all: compile_all

compile_all: main.o device.o person.o
	gcc -o main main.o device.o person.o

main.o: main.c device.h
	gcc -c -o main.o main.c

device.o: device.c device.h
	gcc -c -o device.o device.c

person.o: person.c person.h
	gcc -c -o person.o person.c

clean:
	rm -f main *.o