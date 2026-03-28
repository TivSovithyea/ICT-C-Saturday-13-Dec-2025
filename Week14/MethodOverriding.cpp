#include <iostream>
using namespace std;

class Logger {
    protected:
        string channel;

    public:

        Logger(string channel) : channel(channel) {}

        void log(string message) {
            cout << "[" << channel << "] " << message << endl;
        }
};

class FileLogger : public Logger {
    private:
        string filePath;

    public:
        FileLogger(string filePath) : Logger("FILE") {
            this->filePath = filePath;
        }

        void log(string message) {
            Logger::log(message);
            cout << "Saved file to " << filePath << endl;
        }
};


int main() {

    FileLogger file("file.txt");
    file.log("hello world");

    return 0;
}