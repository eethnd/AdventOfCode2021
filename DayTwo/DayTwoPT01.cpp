#include <iostream>
#include<iomanip>
#include <fstream>
#include <vector>
using namespace std;

struct command {
	string direction;
	int value;
};

int main() {
	ifstream inFile;
	inFile.open("C:\\Users\\davise\\Desktop\\AdventOfCode\\Day02\\commands.txt");

	int total = 0;
	vector<command> commandVec;

	string x;
	int y, count = 0;
	int totalVert = 0, totalHorz = 0;

	while (inFile >> x >> y) {
		commandVec.push_back(command());
		commandVec[count].direction = x;
		commandVec[count].value = y;
		cout << commandVec[count].direction << " " << commandVec[count].value << endl;
		count++;
	}

	for (int i = 0; i < (commandVec.size()); i++) {
		if (commandVec[i].direction == "forward") totalHorz += commandVec[i].value;
		else if (commandVec[i].direction == "up") totalVert -= commandVec[i].value;
		else if (commandVec[i].direction == "down") totalVert += commandVec[i].value;
	}

	cout << "totalHorz = " << totalHorz << endl;
	cout << "totalVert = " << totalVert << endl;
	cout << "Multiplied = " << totalHorz*totalVert << endl;


	return 0;
}
