#include <iostream>
#include <iomanip>
#include "conversions.h"
using namespace std;

int main(){
    double temp;
    double velocity;
    int choose;
    cout << "Enter problem temperature" << endl;
    cin >> temp;
    cout << "What is the metric of the problem temperature?" << endl;
    cout << "1-Farenheit" << endl;
    cout << "2-Celsius" << endl;
    cout << "3-Kelvin" << endl;
    cin >> choose;
    while(true){
        if (choose == 1){
            temp = FtoK(temp);
            break;
        }
        else if (choose == 2){
            temp = CtoK(temp);
            break;
        }
        else if (choose == 3){
            temp = temp;
            break;
        }
        else{
            cerr << "Invalid Input" << endl;
        }
    }
    cout << "Enter problem velocity" << endl;
    cin >> velocity;
    cout << "What is the metric of the problem velocity" << endl;
    cout << "1-knots" << endl;
    cout << "2-mph" << endl;
    cout << "3-mps" << endl;
    cin >> choose;
    while(true){
        if (choose == 1){
            velocity = knotsToMps(velocity);
            break;
        }
        else if (choose == 2){
            velocity = mphToMps(velocity);
            break;
        }
        else if (choose == 3){
            velocity = velocity;
            break;
        }
        else
            cerr << "Invalid Input" << endl;
    }
    double c = speedOfSound(temp);
    double M = machNumber(velocity, temp);
    cout << "Speed of sound = " << c <<" m/s"<< endl;
    cout << setprecision(3) << endl;
    cout << "Mach Number = " << M << endl;
    return 0;
}