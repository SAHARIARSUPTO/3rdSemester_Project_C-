#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include "busRoutes.h"
using namespace std;

void registration();
void login();
void barcode();
void afterlogin();

int main() {
    barcode();
    return 0;
}

void registration() {
    string name;
    int age, id;
    ofstream file;
    file.open("student.txt", ios::out | ios::app);
    cout << "Enter Your Name:";
    cin >> name;
    cout << "Enter your Id:";
    cin >> id;
    cout << "Enter Your Age:";
    cin >> age;

    file << id << " " << name << " " << age << endl;
    afterlogin();
    file.close();

}

void login() {
    string name1, name;
    int age1, age, id, id1;
    cout << "Enter Your Name:";
    cin >> name1;
    cout << "Enter your Id:";
    cin >> id1;
    ifstream readFile("student.txt");
    while (getline(readFile, name)) {

        stringstream ss(name);
        ss >> id >> name >> age;
        if (name == name1 && id1 == id) {
            cout << "Login successful!" << endl;
            afterlogin();
            break;
        }
    }
    readFile.close();
}

void afterlogin() {
    cout << "1. Enter VU Transit Explorer" << endl;
    cout << "2. Logout" << endl;
    int menu;
    cout << "Enter your choice:";
    cin >> menu;
    if (menu == 1) {
        busRoutes();
    } else if (menu == 2) {
        cout << "Successfully logged out from this account" << endl;
        barcode();
    } else {
        cout << "Invalid choice" << endl;
    }
}

void barcode() {
    cout << "0. registration" << endl;
    cout << "1. login" << endl;
    int menu;
    cout << "Enter your choice:";
    cin >> menu;
    if (menu == 0) {
        registration();
    } else if (menu == 1) {
        login();
    } else {
        cout << "Invalid choice" << endl;
    }
}
