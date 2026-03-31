#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin>>str;
    map<char, int>mpp;
    for(char c ='a'; c <='z'; c++){
        mpp[c] = 0;
    }
    for(int i = 0; i < str.size(); i++){
        mpp[str[i]]++;
    }
    for(auto it: mpp){
        if(it.second!=0)
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}