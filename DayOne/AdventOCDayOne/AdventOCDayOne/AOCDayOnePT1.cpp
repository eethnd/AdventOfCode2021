#include <iostream>
#include<iomanip>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	ifstream inFile;
	int total = 0;
    vector<int> depths;
	inFile.open("C:\\Users\\davise\\Desktop\\AdventOfCode\\Day01\\depths.txt");

    int n;
    while (inFile >> n) {
        depths.push_back(n); }
    for (int i = 0; i < (depths.size()-1); i++) {
        if ((depths.at(i) - depths.at(i + 1)) < 0) {
            total++; } }
    cout << total;
	return 0;
}