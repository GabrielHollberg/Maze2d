main: main.o Pathfinder.o
	g++ -o main main.o Pathfinder.o

main.o: main.cpp
	g++ -c -g -Wall main.cpp

Pathfinder.o: Pathfinder.cpp
	g++ -c -g -Wall Pathfinder.cpp

clean:
	rm main main.o Pathfinder.o