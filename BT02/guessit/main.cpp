#include <bits/stdc++.h>

using namespace std;

void checkguess(int a, int b){
    if(a == b){
        cout << "Congratulation! You got it.\n";
        cout << "----------------------------------------------------------\n";
    }
    else if(a > b) cout << "Too big\n";
    else cout << "Too small\n";
}
int initnumber(){
    return rand()%100 + 1;
}
int getGuess(){
    int n;
    cout << "Enter your guess: ";
    cin >> n;
    return n;
}
bool menu(){
    cout << "1. Start new game.\n" << "2. Quit\n";
    int choice;
    do{
        cout << "Enter your choice: \n";
        cin >> choice;
    } while(choice != 1 && choice != 2);
    if(choice == 1) return true;
    return false;
}

int main()
{
    srand(time(NULL));
    while(menu()){
        int numofcomputer = initnumber();
        int guess;
        do{
            guess = getGuess();
            checkguess(guess, numofcomputer);
        }while(guess != numofcomputer);
    }
    return 0;
}
