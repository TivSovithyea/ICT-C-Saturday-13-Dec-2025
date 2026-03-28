#include <iostream>
using namespace std;

class BankAccount {
    private:
        double balance;
        string accountNo;

    public:

    BankAccount(double b, string a) : balance(b), accountNo(a) {}

    void deposit(double amount) {
        if (amount <= 0) throw invalid_argument("Bad Amount");
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount > balance) return false;
        balance -= amount;
        return true;
    }

    double getBalance() {
        return balance;
    }

    string getAccountNo() {
        return accountNo;
    }
};

int main() {

    BankAccount bankAccount(2000, "1235555");
    cout << bankAccount.getBalance() << endl;
    bankAccount.deposit(500);
    bankAccount.withdraw(1000);
    cout << bankAccount.getBalance() << endl;
}