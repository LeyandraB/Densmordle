CC=g++ -std=c++11 -g

OBJS= main.o user_input.o RoomInfo.o #continue to add as necessary

default: Densmordle

Densmordle: $(OBJS)
	$(CC) -o Densmordle $(OBJS) 

RoomInfo.o: RoomInfo.cpp RoomInfo.h
	$(CC) -c RoomInfo.cpp -o RoomInfo.h

user_input: user_input.cpp RoomInfo.o
	$(CC) -o user_input.exe user_input.cpp RoomInfo.o