#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

// UC to LC converter
string toLower(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

// Random song selector
int getRandom(vector<string> songs, vector<int> played) {
    int number;
    do {
        number = rand() % songs.size();
    } while (find(played.begin(), played.end(), number) != played.end());
    return number;
}


int main() {
    // 3 vectors = hold song, hold song played, command to play or quit
    vector <string> songs;
    vector <int> played;
    string song, command;

    ifstream file("resources/songs.txt");

    // checks file opened
    if (!file) {
        cout << "Error opening songs.txt!" << endl;
        return 1;
    }

    // Reads file + updates vector
    while (getline(file, song)) {
        songs.push_back(song);
    }
    file.close();

    // Random number generator / random song selector
    srand(time(0));

    // While loop for random song or quit
    do {
        cout << "Play a random song or Quit: ";
        getline(cin, command);

        command = toLower(command);

        if (command == "play a random song") {
            // Checks user input + if total songs played = total songs
            if (played.size() == songs.size()) {
                played.clear();
            }

            int number = getRandom(songs, played);
            
            // Displays song + adds song to played vector
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