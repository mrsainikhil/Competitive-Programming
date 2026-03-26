#include<bits/stdc++.h>

using namespace std;

int main(){
    string first, second;
    getline(cin,first);
    getline(cin,second);
    int i = first.size() - 1;
    int j = second.size() - 1;
    bool brothers = true;
    while(i && j){
        if(first[i] != second[j]){
            brothers = false;
            break;
        }
        if(first[i] == ' '){
            break;
        }
        i--;
        j--;
    }
    if(brothers){
        cout<<"ARE Brothers";
    }else{
        cout<<"NOT";
    }
    return 0;
}