#include<bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin>>queries;
    while(queries--){
        int size;
        cin>>size;
        vector<char> vec(size);
        for(int i = 0; i < size; i++){
            cin>>vec[i];
        }
        map<int, int> visited;
        visited[0]++;
        int j = 0;
        for(int i = 0; i < size; i++){
            if(vec[i] == 'R'){
                visited[++j]++;
            }else{
                visited[--j]++;
            }
        }
        int count = 0;
        for(auto it: visited){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}