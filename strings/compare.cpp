#include<bits/stdc++.h>

using namespace std;

int main() {
    string first, second;
    cin>>first>>second;
    if(first == second){
        cout<<first;
        return 0;
    }
    int flag = 0;
    for(int i = 0; i < first.size() && i < second.size(); i++){
        if(first[i] > second[i]){
            flag = 1;
            break;
        }else if(first[i] < second[i]){
            flag = -1;
            break;
        }
    }
    if(flag == 1){
        cout<<second;
    }else if(flag == -1){
        cout<<first;
    }else{
        if(first.size() > second.size()){
            cout<<second;
        }else{
            cout<<first;
        }
    }
    return 0;
}