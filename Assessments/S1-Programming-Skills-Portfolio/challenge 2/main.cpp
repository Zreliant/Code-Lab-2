#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

int main() {
    vector <string> songs;
    vector <int> played;
    string song, command;

    ifstream file("resources/songs.txt");

    while (getline(file, song)) {
        songs.push_back(song);
    }
    file.close();

    srand(time(0));

    return 0;
}