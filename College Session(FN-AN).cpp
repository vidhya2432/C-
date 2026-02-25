#include <iostream>
using namespace std;

int main() {
    int day, session;

    cout << "Enter day number (1-7): ";
    cin >> day;

    switch(day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "Enter session (1-FN, 2-AN): ";
            cin >> session;

            switch(session) {
                case 1:
                    cout << "FN: SOI Lab";
                    break;
                case 2:
                    cout << "AN: Academic";
                    break;
                default:
                    cout << "Invalid session";
            }
            break;

        case 7:
            cout << "Sunday is Holiday";
            break;

        default:
            cout << "Invalid day";
    }

    return 0;
}