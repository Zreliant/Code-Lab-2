#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

string toLower(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int getRandom(vector<string> songs, vector<int> played) {
    int number;
    do {
        number = rand() % songs.size();
    } while (find(played.begin(), played.end(), number) != played.end());
    return number;
}


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

    do {
        cout << "Play a random song or Quit: ";
        getline(cin, command);

        command = toLower(command);

        if (command == "play a random song") {
            if (played.size() == songs.size()) {
                played.clear();
            }

            int number = getRandom(songs, played);

            cout << "Playing: " << songs[number] << endl;
            played.push_back(number);
        }

        else if (command != "quit") {
            cout << "Invalid command. Please try again!" << endl;
        }

    } while (command != "quit");

    cout << "Goodbye!" << endl;

    return 0;
}