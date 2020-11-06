CC = g++
exe_file = test
$(exe_file):main.o pizza.o restaurant.o menu.o
	$(CC) main.o pizza.o restaurant.o menu.o -o $(exe_file)
main.o: main.cpp
	$(CC) -c main.cpp
pizza.o: pizza.cpp
	$(CC) -c pizza.cpp
restaurant.o: restaurant.cpp
	$(CC) -c restaurant.cpp
menu.o: menu.cpp
	$(CC) -c menu.cpp


clean:
	rm -f *.out *o $(exe_file)
