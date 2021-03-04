TARGET=main
CFLAGS= -Wall -Wextra
LIB=-l SDL2

ALL=$(TARGET)

$(TARGET): main.o game.o
	g++ $(CFLAGS) $(LIB) -o $@ $^

main.o: main.cpp 
	g++ $(CFLAGS) -c -o $@ $<

game.o: Game.cpp Game.hpp
	g++ $(CFLAGS) -c -o $@ $<

clean:
	rm $(TARGET) *.o
