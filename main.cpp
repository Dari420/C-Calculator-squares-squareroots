#include <iostream>
#include <string>
#include <cmath>
#include <unistd.h>
using namespace std;

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
        else{
            cout << ("invalid entry!\n");
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
            cout << ("invalid entry!\n");
        }
    }
}

int calculatorChoice(){
    cin.clear();
    string CalChoice;
    string choice1 = "a";
    string choice2 = "b";
    while (true){
        cout << ("pick option\n");
        cout << ("a) square roots\n");
        cout << ("b) squares\n");
        cin >> (CalChoice);
        if (CalChoice == choice1 || CalChoice == choice2){
            if (CalChoice == choice1){
                squareroot();
                return 0;
            }
            else if (CalChoice == choice2){
                square();
                return 0;
            }
        }
        else{
            cout << ("invalid entry!\n");
        }
    }
}

int askAgain(){
    cin.clear();
    string AgainOrNot;
    string yes = "y";
    string no = "n";
    while (true){
        cout << ("go again? y/n \n");
        cin >> (AgainOrNot);
        if (AgainOrNot == yes || AgainOrNot == no){
            if (AgainOrNot == yes){
                return 0;
            }
            else if (AgainOrNot == no){
                cout << ("closing calculator");
                sleep(1);
                exit(0);
            }
        }
        else{
            cout << ("invalid entry!\n");
        }
    }
}

int main() {
    while (true){
        calculatorChoice();
        askAgain();
    }
}
