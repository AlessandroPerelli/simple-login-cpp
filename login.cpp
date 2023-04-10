#include <iostream>
#include <string>

using namespace std;

string getUserCredentials() {
    string username;
    string password;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;
    return username + " " + password;
}

int main() {
    string boss;
    cout << "Welcome to the login system" << endl;
    cin >> boss;
    cout << getUserCredentials() << endl;
    return 0;
}