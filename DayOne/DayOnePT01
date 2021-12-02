#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream inFile;
    int total = 0;
    int count = 0;
    int grpTotal = 0;
    vector<int> depths;
    vector<int> groups;

    inFile.open("C:\\Users\\davise\\Desktop\\AdventOfCode\\Day01\\depths.txt");

    int n;
    while (inFile >> n) {
        depths.push_back(n); }

    for (int i = 0; i < (depths.size() - 2); i++) {
        for (int y = 0; y < 3; y++) {
            grpTotal = grpTotal + depths.at(count);
            count++; }
        count = count - 2;
        groups.push_back(grpTotal);
        grpTotal = 0; }
    
    for (int z = 0; z < (groups.size() - 1); z++) {
        if ((groups.at(z) - groups.at(z + 1)) < 0) {
            total++; } }
    cout << total;
    return 0;
}
