#pragma once
#include <vector>
#include <string>
using namespace std;

class elevator {
private:
	vector<int>elevate;
	bool Stop;
	int currentFloor;
	int floorDifference;
	int waitingTime;
	int stopCount;
	string direction;
public:

elevator() {
	Stop = false;
	currentFloor = 0;
	floorDifference = 0;
	waitingTime = 0;
	stopCount = 0;
}
int atDoor(int floor) {

}
int inputRequest(int floor) {
	elevate.push_back(floor);
} 
void elevating(int floorRequest, string givenDirection) {
	if (elevate.size() == 1)
	{
		currentFloor = floorRequest;
		//call time function
	}
	if (floorRequest < currentFloor)
	{
		direction = "down";
		floorDifference = currentFloor - floorRequest;
		waitingTime = floorDifference + 0.5*stopCount;
		currentFloor -= floorRequest;

	}
	if (floorRequest > currentFloor) {
		direction = "up";
		floorDifference = floorRequest - currentFloor;
		currentFloor += floorRequest;
	}

}
int returnTime() {

}
};
class outsideUser {
private:
	int waitingTime;
	string direction;
	outsideUser() {

	}
};
class User {
	int waitingTime;
	int Request;
	User() {
		Request = 0;
		waitingTime = 0;
	}

};