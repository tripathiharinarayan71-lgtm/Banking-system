#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Account {
    int id;
    string name;
    double balance;
};

vector<Account> accounts;
int accountCounter = 1;

void createAccount(string name, double balance) {
    Account a = {accountCounter++, name, balance};
    accounts.push_back(a);
}

void showAccounts() {
    for (auto &a : accounts) {
        cout << "ID: " << a.id << " | Name: " << a.name 
             << " | Balance: " << a.balance << endl;
    }
}

int main() {
    createAccount("John", 1000.50);
    createAccount("Emma", 2500.75);
    cout << "Banking System - Accounts:" << endl;
    showAccounts();
    return 0;
}
