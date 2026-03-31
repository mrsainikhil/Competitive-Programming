#include<bits/stdc++.h>

using namespace std;

int main() {
    string first,second;
    cin>>first>>second;
    cout<<first.size()<<" "<<second.size()<<endl;
    cout<<first<<second<<endl;
    char c = first[0];
    first[0] = second[0];
    second[0] = c;
    cout<<first<<" "<<second;
    return 0;
}