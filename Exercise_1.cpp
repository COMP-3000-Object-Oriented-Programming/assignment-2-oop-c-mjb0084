#include<iostream>
#include<String>

using namespace std;

int date, month, day, dayValue;
int year = -1;

bool isLeapYear(int year){
    // cout << "\nC1: " << (year % 400) << "\nC2: " << (year % 4) << "\nC3: " << (year % 100);
    // cout << "\n"<<((year % 400 == 0) || ((year % 4==0) && (year % 100 != 0)));
    return ((year % 400 == 0) || ((year % 4==0) && (year % 100 != 0)));
}

int dayCheck(int day, int month, int year){
    if (month == 2){
        if (isLeapYear(year)){
            while (!((1<=day)&&(day<=29))){
                cout << "\nPlease enter a day between 1 and 29\nDay ";
                cin >> day;
            }
        }
        else {
            while (!((1<=day)&&(day<=28))){
                cout << "\nPlease enter a day between 1 and 28\nDay ";
                cin >> day;
        }
        }
    }
    if ((month == 9) | (month == 4) | (month==6) | (month==11)){
        while (!((1<=day)&&(day<=30))){
        cout << "\nPlease enter a day between 1 and 30\nDay ";
        cin >> day;
        }
    }
    else  {
        while (!((1<=day)&&(day<=31))){
        cout << "\nPlease enter a day between 1 and 31\nDay ";
        cin >> day;
        }
    }
    return day;  
}
int monthCheck(int month){
    while (!((1<=month)&&(month<=12))){
            cout << "\nPlease enter a month between 1 and 12\nMonth: ";
            cin >> month;
     }
    return month;
}
int yearCheck(int year){
    while (!((0 <= year) && (year <= 9999))){
    cout << "Please enter a year between 0 and 9999AD:\nYear ";
    cin >> year;
    }
    return year;
}

int getCenturyValue(int year){
    return (3-((year/100)%4))*2;
}

int getYearValue(int year){
   int a = (year - (year/100)*100);
   int b = a/4;
   return a+b; 
}

int getMonthValue(int month, int year){
    switch(month){
        case 1:
            if (isLeapYear(year)){
                return 6;
            }
            else
                return 0;
        case 2:
            if (isLeapYear(year)){
                return 2;
            }
            else
                return 3;
        case 3:
            return 3;
        case 4:
            return 6;
        case 5:
            return 1;
        case 6:
            return 4;
        case 7:
            return 6;
        case 8:
            return 2;
        case 9:
            return 5;
        case 10:
            return 0;
        case 11:
            return 3;
        case 12:
            return 5;
        default:
            break;
    }

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
    cout << "Enter the date below\nYear: ";
    cin >> year;
    year = yearCheck(year);
    cout << "\nMonth: ";
    cin >> month;
    month = monthCheck(month);
    cout << "\nDay: ";
    cin >> day;
    day = dayCheck(day,month,year);

    // cout << "\nThe date is "<<month<<"/"<<day<<"/"<<year;

    dayValue = (day + getMonthValue(month,year) + getYearValue(year) + getCenturyValue(year))%7;

    cout << "\n\nThe day is a " << dayOfWeek(dayValue) << "\n\n";

}
