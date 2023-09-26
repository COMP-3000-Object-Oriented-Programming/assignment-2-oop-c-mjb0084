#include<iostream>

using namespace std;

double minutes;
double seconds;
double kpH = 0;

double convertToMPH1(double minutes,double seconds){
    double hours = ((minutes/60)+(seconds/3600));
    return (1/hours);
}

double convertToMPH2(double kpH){
    return (kpH/1.61);
}

int main(void){
    cout << "Please enter a running pace..\nMinutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;

    cout << "\nWhat is the speed in KPH?\n:";
    cin >> kpH;
    
    double MPH1 = convertToMPH1(minutes,seconds);
    double MPH2 = convertToMPH2(kpH);
    
    cout << "\nThe first speed is: " << MPH1 << " MPH" << "\nThe second speed is: " << MPH2 << " MPH";
}