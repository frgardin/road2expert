#include <iostream>

using namespace std;

int main() {
    double d; cin >> d;
    if (d>= 0 && d<=25) {
        cout << "Interval [0,25]" << endl;
        return 0;
    }    
    if (d > 25 && d<= 50) {
        cout << "Interval (25,50]" << endl;
        return 0;
    }
    if (d > 50 && d <= 75) {
        cout << "Interval (50,75]" << endl;
        return 0;
    }
    if (d > 75 && d <= 100) {
        cout << "Interval (75,100]" << endl;
        return 0;
    }
    cout << "Out of Intervals" << endl;

}
