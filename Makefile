CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp bf.cpp log.cpp
OBJECTS=$(SOURCES:.cpp=.o)
	EXECUTABLE=bf

all: $(SOURCES) $(EXECUTABLE)
		
$(EXECUTABLE): $(OBJECTS) 
		$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@
clean:
	    \rm *.o *~ p1

