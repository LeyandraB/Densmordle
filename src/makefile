CC=g++ -std=c++11 -g

OBJS= main.o user_input.o RoomInfo.o #continue to add as necessary

default: Densmordle

Densmordle: $(OBJS)
	$(CC) -o Densmordle $(OBJS) 

RoomInfo.o: RoomInfo.cpp RoomInfo.h
	$(CC) -c RoomInfo.cpp -o RoomInfo.o

MakeRooms.o: MakeRooms.cpp MakeRooms.h RoomInfo.o
	$(CC) -c MakeRooms.cpp -o MakeRooms.o

user_input: user_input.cpp RoomInfo.o MakeRooms.o
	$(CC) -o user_input.exe user_input.cpp RoomInfo.o MakeRooms.o
