#include <iostream>
#include <string>
using namespace std;

int main() {
    string day;

    cout << "Enter day: ";
    cin >> day;

    if(day == "Mon" ||day == "Tue") {
        cout << "Irritating day";
    }
    else if(day == "Wed" || day == "Thu") {
        cout << "Boring day";
    }
    else if(day == "Fri" || day == "Sat") {
        cout << "Expectation day";
    }
    else if(day == "Sun") {
        cout << "Excited day";
    }
    else {
        cout << "Invalid day input!";
    }

    return 0;
}
