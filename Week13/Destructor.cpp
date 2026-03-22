#include <iostream>
using namespace std;

class FileHandler {
    private:
        string filename;
        bool isOpen;

    public:
        FileHandler(string filename) {
            this->filename = filename;
            isOpen = true;
            cout << "Opening file " << filename << endl;
        }

        ~FileHandler() {
            isOpen = false;
            cout << "Closing file " << filename << endl;
        }
};

int main() {

    FileHandler f1("text.txt");
    {
        FileHandler f2("log.txt");
    }

    cout << "Back to Main" << endl;


}