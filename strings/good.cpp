#include<bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin>>queries;
    while(queries--){
        string str;
        cin>>str;
        int flag = 0;
        for(int i = 0; i < str.size() - 2; i++){
            if(str[i] == '0' && str[i+1] == '1' && str[i+2] == '0'){
                cout<<"Good"<<endl;
                flag++;
                break;
            }else if(str[i] == '1' && str[i+1] == '0' && str[i+2] == '1'){
                cout<<"Good"<<endl;
                flag++;
                break;
            }
        }
        if(!flag)
        cout<<"Bad"<<endl;
    }
    return 0;
}