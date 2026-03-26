#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin>> str;
    int first = 0, second = 0;
    char symbol;
    bool flag= false;
    for(int i = 0 ; i < str.size(); i++){
        if(flag){
            second *= 10;
            second += str[i] -'0';
        }else{
            int digit = str[i] - '0';
            if(digit > 9 || digit < 0){
                flag = true;
                symbol = str[i];
            }else{
                first *= 10;
                first += digit;
            }
        }
    }
    switch(symbol){
        case '+':
            cout<<first + second;
            break;
        case '-':
            cout<<first - second;
            break;
        case '*':
            cout<<first * second;
            break;
        case '/':
            cout<<first / second;
            break;
    }
    return 0;
}