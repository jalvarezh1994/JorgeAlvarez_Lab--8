Main: Main.o Real.o Racional.o Radical.o
	g++ Main.o Real.o Racional.o Radical.o -o main

Main.o: Main.cpp Real.h Racional.h Radical.h
	g++ -c Main.cpp

Real.o: Real.h Real.cpp
	g++ -c Real.cpp

Radical.o: Real.h Radical.cpp Radical.h
	g++ -c Radical.cpp

Racional.o: Real.h Racional.h Racional.cpp
	g++ -c Racional.cpp

clean:
	rm -f *.o main