CC = g++ 	
exe_file = test 		
main.o: main.cpp
	$(CC) -c main.cpp 	
Header.o: Header.cpp 	
	$(CC) -c Header.cpp 	
$(exe_file): main.o Header.o 	
	$(CC) main.o Header.o -o $(exe_file)  	
	
clean: 	
	rm -f *out *.o $(exe_file) 	
