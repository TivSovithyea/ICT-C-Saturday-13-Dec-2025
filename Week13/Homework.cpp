#include <iostream>
using namespace std;

struct Song {
    string title;
    string artist;
    int releaseYear;
};

int main() {

    Song song1;
    Song song2 = {"Dancing Queen", "ABBA", 1976};

    song1.title = "Shape of you";
    song1.artist = "Ed Sheeran";
    song1.releaseYear = 2017;

    cout << "Your song Play List are :" << endl;
    cout << song1.title << " | " << song1.artist << " | " << song1.releaseYear << endl;
    cout << song2.title << " | " << song2.artist << " | " << song2.releaseYear << endl;


    return 0;
}