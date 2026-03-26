#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int digit = str[0] - '0';
    if(digit % 2 == 0){
        cout<<"EVEN";
    }else{
        cout<<"ODD";
    }
    return 0;
}