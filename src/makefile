CC=g++ -std=c++11 -g

END = -lWinmm

OBJS= main.o RoomInfo.o MakeRooms.o CheckInput.o InputHandling.h GenerateRandomClassroom.o RegularMode.o TimedMode.o LimitedMode.o highestscore.o #continue to add as necessary

default: Densmordle

Densmordle: $(OBJS)
	$(CC) -o Densmordle $(OBJS) $(END)

RoomInfo.o: RoomInfo.cpp RoomInfo.h
	$(CC) -c RoomInfo.cpp -o RoomInfo.o

MakeRooms.o: MakeRooms.cpp MakeRooms.h RoomInfo.o
	$(CC) -c MakeRooms.cpp -o MakeRooms.o

GenerateRandomClassroom.o: GenerateRandomClassroom.cpp GenerateRandomClassroom.h RoomInfo.o MakeRooms.o
	$(CC) -c GenerateRandomClassroom.cpp -o GenerateRandomClassroom.o

CheckInput.o: CheckInput.cpp CheckInput.h
	$(CC) -c CheckInput.cpp -o CheckInput.o

user_input: user_input.cpp RoomInfo.o MakeRooms.o
	$(CC) -o user_input.exe user_input.cpp RoomInfo.o MakeRooms.o

RegularMode.o: RegularMode.cpp RegularMode.h
	$(CC) -c RegularMode.cpp -o RegularMode.o

TimedMode.o: TimedMode.cpp TimedMode.h
	$(CC) -c TimedMode.cpp -o TimedMode.o

LimitedMode.o: LimitedMode.cpp LimitedMode.h
	$(CC) -c LimitedMode.cpp -o LimitedMode.o

highestscore.o: highestscore.cpp highestscore.h
	$(CC) -c highestscore.cpp -o highestscore.o

main: main.cpp RoomInfo.o MakeRooms.o CheckInput.o InputHandling.h GenerateRandomClassroom.o RegularMode.o TimedMode.o LimitedMode.o highestscore.o
	$(CC) -o main.exe main.cpp RoomInfo.o MakeRooms.o CheckInput.o InputHandling.h GenerateRandomClassroom.o RegularMode.o TimedMode.o LimitedMode.o highestscore.o $(END)

clean:
	rm $(OBS) Densmordle *.exe