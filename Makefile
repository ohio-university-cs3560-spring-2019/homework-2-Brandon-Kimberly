all: main.o replace.o replace.a prog1 clean

main.o : main.cc replace.h
	g++ -c main.cc

replace.o : replace.cc replace.h
	g++ -c replace.cc

replace.a : replace.o
	mkdir lib
	ar rcs replace.a replace.o
	cp replace.a lib
	rm replace.a

prog1 : main.o replace.o
	g++ -o prog1 main.o replace.o

clean:
	mkdir include
	cp replace.h include
	rm replace.h
	cp main.cc lib
	cp replace.cc lib
	rm *.o
	rm *.cc
	rm Makefile
