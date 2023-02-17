#include <bits/stdc++.h>
#include "hangman_declare.h"

using namespace std;

void greeting(){
    cout << "===========================\n";
    cout << "Welcome to HANGMAN GAME!\n";
    cout << "===========================\n";
}

void displaythehang(int misses){
    if(misses == 0){
        cout << "+---------+      \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "=================\n";
    }
    else if(misses == 1){
        cout << "+---------+      \n";
        cout << "||        |       \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "=================\n";
    }
    else if(misses == 2){
        cout << "+---------+      \n";
        cout << "||        |       \n";
        cout << "||        O       \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "=================\n";
    }
    else if(misses == 3){
        cout << "+---------+      \n";
        cout << "||        |       \n";
        cout << "||        O       \n";
        cout << "||        |       \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "=================\n";
    }
    else if(misses == 4){
        cout << "+---------+      \n";
        cout << "||        |       \n";
        cout << "||        O       \n";
        cout << "||       /|       \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "=================\n";
    }
    else if(misses == 5){
         cout << "+---------+      \n";
        cout << "||        |       \n";
        cout << "||        O       \n";
        cout << "||       /|\\       \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "=================\n";
    }
    else if(misses == 6){
        cout << "+---------+      \n";
        cout << "||        |       \n";
        cout << "||        O       \n";
        cout << "||       /|\\       \n";
        cout << "||       /       \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "=================\n";
    }
    else if(misses == 7){
        cout << "+---------+      \n";
        cout << "||        |       \n";
        cout << "||        O       \n";
        cout << "||       /|\\       \n";
        cout << "||       / \\      \n";
        cout << "||               \n";
        cout << "||               \n";
        cout << "=================\n";
    }
}

void displaytheres(vector<char> &incorrect, string &ans){
    cout << "Incorrect letters: \n";
    for(int i = 0; i < incorrect.size(); i++) cout << incorrect[i] << " ";
    cout << endl;
    cout << "Secrete Word: \n";
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}

void endgame(int misses){
    if(misses == 7) cout << "You lose!\n";
    else cout << "Congratulation! You've saved the man.\n";
    cout << "CODED BY: LAI HOANG HIEP";
}