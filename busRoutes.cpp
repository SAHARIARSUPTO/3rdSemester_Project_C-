#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include "busRoutes.cpp" // Include the header file
using namespace std;

int main_time;

void afterlogin();
void route_1(){
    int n;
    cout << "Enter your pickup point number" << endl;
    cout << "1.Police line" << endl << "2.C & B" << endl << "3.Jadughor Mor" << endl;
    cout << "4.Moni Chottor" << endl << "5.Alupotti" << endl << "6.Talaimari" << endl;
    cout << "7.VARENDRA UNIVERSITY" << endl;
    cin >> n;
    double a;

    if (n == 1) {
        a = 8.20;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (C & B)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 2) {
        a = 8.25;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (Jadughor Mor)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 3) {
        a = 8.30;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (Monichottor)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 4) {
        a = 8.35;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (Alupotti)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 5) {
        a = 8.40;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (Talaimari)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 6) {
        a = 8.45;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (VU Campus)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 7) {
        a = 9.0;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has Reached Campus" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else {
        cout << "Invalid input" << endl;
    }
}

// Route 2
void route_2(){
    int n;
    cout << "Enter your pickup point number" << endl;
    cout << "1.Court Station" << endl << "2.Bohorompur Mor" << endl << "3.City Bypass" << endl;
    cout << "4.Bornali Mor" << endl << "5.Railgate" << endl << "6.Amchottor" << endl;
    cout << "7.VU Campus" << endl;
    cin >> n;
    double a;

    if (n == 1) {
        a = 8.20;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (Bohorompur Mor)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 2) {
        a = 8.25;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (City Bypass)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 3) {
        a = 8.30;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (Bornali Mor)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 4) {
        a = 8.35;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (Railgate)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 5) {
        a = 8.40;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (Amchottor)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 6) {
        a = 8.50;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has left. Next stop (VU Campus)" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else if (n == 7) {
        a = 9.0;
        cout << "Enter the current time: ";
        cin >> main_time;
        if (main_time < 8 || main_time >= 9) {
            cout << "Bus service is not available at this time" << endl;
        } else if (a - main_time < 0) {
            cout << "Your Bus has Reached Campus" << endl;
        } else {
            cout << "Bus arriving in " << fixed << setprecision(2) << (a - main_time) << " Hours" << endl;
        }
    } else {
        cout << "Invalid input" << endl;
    }
}

void busRoutes(){
    int route_choice;
    cout << "Varendra University Bus Service has 2 Different Routes." << endl;
    cout << "Note: Make Sure to Enter the Current time value 8 to 9 (AM)" << endl;
    cout << " Route-1: Police Line's > Zero Point > Talaimari > VU Campus" << endl;
    cout << " Route-2: Court Station > Bornali > Amchottor > VU Campus" << endl;
    cout << "Select the route (1 or 2): ";
    cin >> route_choice;
    if (route_choice == 1) {
        cout << "You selected Route-1" << endl;
        route_1();
    } else if (route_choice == 2) {
        cout << "You selected Route-2" << endl;
        route_2();
    } else {
        cout << "Invalid route selection" << endl;
    }
}
