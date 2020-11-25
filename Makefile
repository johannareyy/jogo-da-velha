CXXARGS = -Wall -Wextra -std=c++17
NOMEPROG = exproposto3.bin

compilar: exproposto3.cpp
	g++ exproposto3.cpp -o $(NOMEPROG) $(CXXARGS)

debug: exproposto3.cpp
	g++ exproposto3.cpp -o $(NOMEPROG) $(CXXARGS) -g

apagar:
	rm $(NOMEPROG)

executar: compilar
	./$(NOMEPROG)
