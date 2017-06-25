all : hello
	./hello

hello : a.o b.o
	g++ -o hello a.o b.o

a.o : a.cc a.h
	g++ -c -o a.o a.cc

b.o : b.cc
	g++ -c -o b.o b.cc
