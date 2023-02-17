#include <bits/stdc++.h>
#include "hangman_declare.h"

const int MAXMISSES = 7;
using namespace std;

int main(){
    greeting();
    int misses = 0;
    string secretword = "iloveyou";
    string ans = "________";
    vector<char> incorrect;
    while(misses < MAXMISSES && ans != secretword){
        bool check = false;
        displaythehang(misses);
        displaytheres(incorrect, ans);
        char a;
        cout << "Enter your guessed letter: ";
        cin >> a;
        for(int i = 0 ; i < ans.size(); i++){
            if(secretword[i] == a){
                ans[i] = a;
                check = true;
            }
        }
        if(ans != secretword){
            if(check) cout << "Congratulation! Let's continue.\n"; 
            else{
                cout << "Opps! Try other letters.\n";
                incorrect.push_back(a);
                misses++;
            }
        }
    }
    if(misses == 7) displaythehang(misses);
    endgame(misses);
    return 0;
}