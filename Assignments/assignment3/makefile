CC = g++
exe_file = test
$(exe_file):main.o set_up.o house.o citizen.o Game.o businesses.o business.o apartment.o
	$(CC) main.o set_up.o house.o citizen.o Game.o businesses.o business.o apartment.o -o $(exe_file)
main.o: main.cpp
	$(CC) -c main.cpp
set_up.o:set_up.cpp
	$(CC) -c set_up.cpp
house.o: house.cpp
	$(CC) -c house.cpp
citizen.o: citizen.cpp
	$(CC) -c citizen.cpp
Game.o:Game.cpp
	$(CC) -c Game.cpp
businesses.o: businesses.cpp
	$(CC) -c businesses.cpp
business.o: business.cpp
	$(CC) -c business.cpp
apartment.o: apartment.cpp
	$(CC) -c apartment.cpp

clean:
	rm -f *.out *o $(exe_file)
