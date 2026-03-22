#include <iostream>
using namespace std;

class BankAccount {
    private:
        string owner;
        float balance;
        string accountNo;
    public:

        BankAccount() {
            owner = "Unknown";
            balance = 0;
        }

        BankAccount(string o, float b, string a) {
            owner = o;
            balance = b;
            accountNo = a;
        }

        void deposit(float amount) {
            balance += amount;
        }

        void withdraw(float amount) {
            if (amount > balance) {
                cout << "You can't withdraw more than " << balance << endl;
            } else {
                balance -= amount;
            }
        }

        void display() {
            cout << owner << " | " << balance << " | " << accountNo << endl;
        }
};

int main() {

    BankAccount acc1;
    BankAccount acc2("Alice", 5000.0, "ACC-001");
    acc2.deposit(1000);
    acc2.withdraw(200);
    acc2.display();
    acc1.display();
}