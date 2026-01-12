#include <iostream>
#include <thread> // Used for sleep to make effects visible
#include <chrono>

using namespace std;

int main() {

    cout << "\t\t\tHello \n Wo\brld!\n";

    cout << "I'm Student, My name is \"Dara\"";

    /*
        // 1. Newline (\n)
        // Moves the cursor to the next line
        cout << "--- 1. Newline ---" << endl;
        cout << "Line 1\nLine 2\nLine 3" << endl;
        cout << endl;

        // 2. Horizontal Tab (\t)
        // Creates a gap to align text
        cout << "--- 2. Horizontal Tab ---" << endl;
        cout << "ID\tName\tScore" << endl;
        cout << "1\tAlice\t90" << endl;
        cout << "2\tBob\t85" << endl;
        cout << endl;

        // 3. Backslash (\\)
        // Prints a single backslash character
        cout << "--- 3. Backslash ---" << endl;
        cout << "Path: C:\\Windows\\System32" << endl;
        cout << endl;

        // 4. Single Quote (\') and Double Quote (\")
        // Allows you to print quotes inside strings/chars
        cout << "--- 4. Quotes ---" << endl;
        cout << "She said, \"It\'s a sunny day.\"" << endl;
        cout << endl;

        // 5. Question Mark (\?)
        // Prints a simple question mark
        cout << "--- 5. Question Mark ---" << endl;
        cout << "Is this working\? Yes." << endl;
        cout << endl;

        // 6. Alert / Bell (\a)
        // Makes a system beep sound (if your terminal supports it)
        cout << "--- 6. Alert (Sound) ---" << endl;
        cout << "Beep! \a" << endl;
        cout << endl;

        // 7. Backspace (\b)
        // Moves cursor back one char.
        // Here we write "Error", move back one, and overwrite 'r' with '!'
        cout << "--- 7. Backspace ---" << endl;
        cout << "Erro\br!" << endl; // Output will be "Error!"
        cout << endl;

        // 8. Carriage Return (\r)
        // Moves cursor to start of the line.
        // Useful for loading bars (overwriting the line).
        cout << "--- 8. Carriage Return ---" << endl;
        cout << "Loading... 0%";
        cout.flush(); // Force print
        this_thread::sleep_for(chrono::seconds(3)); // Wait 1 second

        cout << "\rLoading... 50%"; // \r moves back to start, then we overwrite
        cout.flush();
        this_thread::sleep_for(chrono::seconds(3));

        cout << "\rLoading... 100%" << endl;
        cout << endl;

        // 9. Vertical Tab (\v) and Form Feed (\f)
        // Note: These behave differently on modern consoles.
        // Often they just act like a newline or a special symbol.
        cout << "--- 9. Vertical Tab & Form Feed ---" << endl;
        cout << "Hello\vWorld (Vertical Tab)" << endl;
        cout << "Hello\fWorld (Form Feed)" << endl;
    */

    return 0;
}