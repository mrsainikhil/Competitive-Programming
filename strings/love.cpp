#include<bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin>>queries;
    while(queries--){
        string first, second;
        cin>>first>>second;
        int maxi = max(first.size(), second.size());
        for(int i = 0; i < maxi; i++){
            if(i < first.size())
                cout<<first[i];
            if(i < second.size())
                cout<<second[i];
        }
        cout<<endl;
    }
    return 0;
}