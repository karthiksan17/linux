all: hello

hello: main.o factorial.o story.o
	g++ main.o factorial.o story.o -o hello

main.o: main.o
	g++ -c main.cpp

factorial.o: factorial.cpp
	g++ -c factorial.cpp

story.o: story.cpp
	g++ -c story.cpp

clean:
	rm -rf *o hello
