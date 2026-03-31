#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin>>str;
    int left = 0, right = str.size() - 1;
    while(left<right){
        if(str[left]!=str[right]){
            cout<<"NO"<<endl;
            return 0;
        }
        left++;
        right--;
    }
    cout<<"YES"<<endl;
    return 0;
}