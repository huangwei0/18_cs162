CC = g++
exe_file = test
$(exe_file): main.o room.o game.o ant.o bee.o
	$(CC) main.o room.o game.o ant.o bee.o -o $(exe_file)
main.o: main.cpp
	$(CC) -c main.cpp
room.o: room.cpp
	$(CC) -c room.cpp
game.o: game.cpp
	$(CC) -c game.cpp
ant.o: ant.cpp
	$(CC) -c ant.cpp
bee.o: bee.cpp
	$(CC) -c bee.cpp

clean:
	rm -f *.out *o $(exe_file)
