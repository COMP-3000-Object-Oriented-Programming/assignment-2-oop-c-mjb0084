#include<iostream>
#include<String>

using namespace std;

int date, month, day, dayValue;
int year = -1;

int yearCheck(int year){
    while (!((0 <= year) && (year <= 9999))){
    cout << "Please enter a year between 0 and 9999AD: ";
    cin >> year;
    }
    return year;
}

bool isLeapYear(int year){
    // cout << "\nC1: " << (year % 400) << "\nC2: " << (year % 4) << "\nC3: " << (year % 100);
    // cout << "\n"<<((year % 400 == 0) || ((year % 4==0) && (year % 100 != 0)));
    return ((year % 400 == 0) || ((year % 4==0) && (year % 100 != 0)));
}

int getCenturyValue(int year){
    return (3-((year/100)%4))*2;
}

int getYearValue(int year){
    return getCenturyValue(year);
}

int getMonthValue(int month){
    return 0;
}

string dayOfWeek(int dayValue){
    if (dayValue == 0){
        return "Sunday";
    }
    if (dayValue == 1){
        return "Monday";
    }
    if (dayValue == 2){
        return "Tuesday";
    }
    if (dayValue == 3){
        return "Wednesday";
    }
    if (dayValue == 4){
        return "Thursday";
    }
    if (dayValue == 5){
        return "Friday";
    }
    if (dayValue == 6){
        return "Saturday";
    }
    else
        return "\nerror\n";
}

int main(){
    // cout << "Enter the date below\nMonth: ";
    // cin >> month;
    // cout << "\nDay: ";
    // cin >> day;
    // cout << "\nYear: ";
    // cin >> year;

    // cout << "The date is "<<month<<"/"<<day<<"/"<<year;

    // cout << "\nEnter the day of week value: ";
    // cin >> dayValue;
    // cout << "\n"<< dayValue;
    // cout << "\nThe day is a " << dayOfWeek(dayValue);

    cout << "input: ";
    cin >> year;
    // yearCheck(year);
    cout << "\noutput: " << year;


}
