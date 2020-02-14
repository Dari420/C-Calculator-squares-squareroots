#include <iostream>
#include <string>
#include <cmath>
#include <unistd.h>
using namespace std;

int addition(){
    cin.clear();
    float addend1;
    float addend2;
    float sum;
    while (true){
        cin.clear();
        cout << ("enter addend 1:\n");
        cin.sync();
        cin >> (addend1);
        if (!cin.fail()){
            while (true) {
                cin.clear();
                cin.sync();
                cout << ("enter addend 2:\n");
                cin >> (addend2);
                if (!cin.fail()) {
                    sum = addend1 + addend2;
                    cout << (sum);
                    cout << ("\n");
                    return 0;
                } else {
                    cout << ("Invalid entry! Please enter a number\n");
                }
            }
        }
        else{
            cout << ("Invalid entry! Please enter a number\n");
        }
    }
}


int subtraction(){
    cin.clear();
    float subtrahend;
    float minuend;
    float difference;
    while (true){
        cin.clear();
        cout << ("enter minuend:\n");
        cin.sync();
        cin >> (minuend);
        if (!cin.fail()){
            while (true) {
                cin.clear();
                cin.sync();
                cout << ("enter subtrahend:\n");
                cin >> (subtrahend);
                if (!cin.fail()) {
                    difference = minuend - subtrahend;
                    cout << (difference);
                    cout << ("\n");
                    return 0;
                } else {
                    cout << ("Invalid entry! Please enter a number\n");
                }
            }
        }
        else{
            cout << ("Invalid entry! Please enter a number\n");
        }
    }
}

int multiplication(){
    cin.clear();
    float multiplicand;
    float multiplier;
    float product;
    while (true){
        cin.clear();
        cout << ("enter multiplicand:\n");
        cin >> (multiplicand);
        if (!cin.fail()){
            while (true) {
                cin.clear();
                cin.sync();
                cout << ("enter multiplier:\n");
                cin >> (multiplier);
                if (!cin.fail()) {
                    product = multiplicand / multiplier;
                    cout << (product);
                    cout << ("\n");
                    return 0;
                } else {
                    cout << ("Invalid entry! Please enter a number\n");
                }
            }
        }
        else{
            cout << ("Invalid entry! Please enter a number\n");
        }
    }
}

int division(){
    cin.clear();
    float dividend;
    float divisor;
    float quotient;
    while (true){
        cin.clear();
        cout << ("enter dividend:\n");
        cin.sync();
        cin >> (dividend);
        if (!cin.fail()){
            while (true) {
                cin.clear();
                cin.sync();
                cout << ("enter divisor:\n");
                cin >> (divisor);
                if (!cin.fail()) {
                    quotient = dividend / divisor;
                    cout << (quotient);
                    cout << ("\n");
                    return 0;
                } else {
                    cout << ("Invalid entry! Please enter a number\n");
                }
            }
        }
        else{
            cout << ("Invalid entry! Please enter a number\n");
        }
    }
}

int square(){
    cin.clear();
    float userinput;
    float square;
    while (true){
        cin.clear();
        cout << ("enter number:\n");
        cin.sync();
        cin >> (userinput);
        if (!cin.fail()){
            square = userinput * userinput;
            cout << (square);
            cout << ("\n");
            return 0;
        }
        else {
            cout << ("Invalid entry! Not a number\n");
        }
    }
}

int squareroot(){
    cin.clear();
    float userinput;
    float squareroot;
    while (true){
        cin.clear();
        cout << ("enter number:\n");
        cin.sync();
        cin >> (userinput);
        if (!cin.fail()){
            squareroot = sqrt(userinput);
            cout << (squareroot);
            cout << ("\n");
            return 0;
        }
        else{
            cout << ("Invalid entry! Not a number\n");
        }
    }
}

int calculatorChoice(){
    cin.clear();
    string CalChoice;
    string choice1 = "a";
    string choice2 = "b";
    string choice3 = "c";
    string choice4 = "d";
    string choice5 = "e";
    string choice6 = "f";
    while (true){
        cout << ("Pick option:\n");
        cout << ("a) Addition\n");
        cout << ("b) Subtraction \n");
        cout << ("c) Multiplication\n");
        cout << ("d) Division\n");
        cout << ("e) Square Roots\n");
        cout << ("f) Squares\n");
        cin >> (CalChoice);
        if (CalChoice == choice1 || CalChoice == choice2 || CalChoice == choice3 ||
            CalChoice == choice4 || CalChoice == choice5 || CalChoice == choice6){
            if (CalChoice == choice1){
                addition();
                return 0;
            }
            else if (CalChoice == choice2){
                subtraction();
                return 0;
            }
            else if (CalChoice == choice3){
                multiplication();
                return 0;
            }
            else if (CalChoice == choice4){
                division();
                return 0;
            }
            else if (CalChoice == choice5){
                squareroot();
                return 0;
            }
            else if (CalChoice == choice6){
                square();
                return 0;
            }
        }
        else{
            cout << ("Invalid entry! Please choose a, b, c, d, e, or f\n");
        }
    }
}

int askAgain(){
    cin.clear();
    string AgainOrNot;
    string yes = "y";
    string no = "n";
    while (true){
        cout << ("Go again? y/n \n");
        cin >> (AgainOrNot);
        if (AgainOrNot == yes || AgainOrNot == no){
            if (AgainOrNot == yes){
                return 0;
            }
            else if (AgainOrNot == no){
                cout << ("Closing calculator");
                sleep(1);
                exit(0);
            }
        }
        else{
            cout << ("Invalid entry! Please choose y/n\n");
        }
    }
}

int main() {
    while (true){
        calculatorChoice();
        askAgain();
    }
}