#include<iostream>

using namespace std;

float change;
bool response = 1;
char response_s = 'N';

float changeCheck(float change){
    while (!((1<=change)&&(99>=change))){
        cout << "\nPlease enter a number between 1 and 99: ";
        cin >> change;
    }
    return change;
}

float askChange(void){
    cout << "\nHow many cents do you have?(1-99)\n: ";
    cin >> change;
    return changeCheck(change);
    // cout << "\nChange: " << change;
}

int getQuarters(int remaining){
    while (remaining>=25){
        return (remaining/25);
    }
    return 0;
} 

int getDimes(int remaining){
    while (remaining>=10){
        return remaining/10;
    }
    return 0;
}

int getNickels(int remaining){
    while(remaining>=5){
        return (remaining/5);
    }
    return 0;
}

int getPennies(int remaining){
    while (remaining>=0){
        return (remaining);
    }
    return 0;
}

void calculate(void){
    int remaining = askChange();
    int quarters = getQuarters(remaining);
    remaining -=(25*quarters);
    int dimes = getDimes(remaining);
    remaining -=(10*dimes);
    // int nickels = getNickels(remaining);
    // remaining -=(5*nickels);
    int pennies = getPennies(remaining);
    remaining -=(pennies);

    cout << "\nQ: " << quarters <<"\nD: " <<dimes<<"\nP: "<<pennies;


}

int main(void){    
    while (1){
        calculate();
        cout << "\nWould you like to calculate again? Y/N\n: ";
        cin >> response_s;
        while (!((response_s=='Y')|(response_s=='y')|(response_s=='N')|(response_s=='n'))){
            cout << "\nPlease respond with Y or N: ";
            cin >> response_s;
        }
        if ((response_s=='N')|(response_s=='n')){
            return 1;
        }
    }
}

