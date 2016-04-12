CPPFLAGS = -g -Wall -ansi
OBJECTS = main.o donante.o main2.o donantes.o


donante.exe: main.o donante.o
	g++ -o donante.exe $(OBJECTS)

donantes.exe: main2.o donantes.o
	g++ -o donantes.exe $(OBJECTS)

main.o: main.cpp donante.hpp
	g++ -c $(CPPFLAGS) main.cpp

main2.o: main2.cpp donantes.hpp
	g++ -c $(CPPFLAGS) main2.cpp

donante.o: donante.cpp donante.hpp donanteInterfaz.hpp

donantes.o: donantes.cpp donantes.hpp donante.cpp donante.hpp

clean:
	rm -f $(OBJECTS)
