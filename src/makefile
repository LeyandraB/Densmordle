CC=g++ -std=c++11 -g

OBJS= main.o RoomInfo.o MakeRooms.o CheckInput.o #continue to add as necessary

default: Densmordle

Densmordle: $(OBJS)
	$(CC) -o Densmordle $(OBJS) 

RoomInfo.o: RoomInfo.cpp RoomInfo.h
	$(CC) -c RoomInfo.cpp -o RoomInfo.o

MakeRooms.o: MakeRooms.cpp MakeRooms.h RoomInfo.o
	$(CC) -c MakeRooms.cpp -o MakeRooms.o

CheckInput.o: CheckInput.cpp CheckInput.h
	$(CC) -c CheckInput.cpp -o CheckInput.o

user_input: user_input.cpp RoomInfo.o MakeRooms.o
	$(CC) -o user_input.exe user_input.cpp RoomInfo.o MakeRooms.o

main: main.cpp RoomInfo.o MakeRooms.o CheckInput.o
	$(CC) -o main.exe main.cpp RoomInfo.o MakeRooms.o CheckInput.o

clean:
	rm $(OBS) Densmordle *.exe