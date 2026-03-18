#include<bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin>>queries;
    while(queries--){
        int size;
        cin>>size;
        map<int, vector<int>>mpp;
        vector<int> vec(size);
        for(int i = 0; i < size; i++){
            cin>>vec[i];
            mpp[vec[i]].push_back(i);
        }
        int count = 0;
        while(!vec.empty()){
            int max = INT_MIN;
            int idx = 0;
            for(auto it: mpp){
                if(it.first > max){
                    max = it.first;
                    idx = it.second.back();
                }
            }
            mpp[max].pop_back();
            if(mpp[max].empty()){
                mpp.erase(max);
            }
            for(int i = vec.size()-1; i >= idx; i--){
                vec.pop_back();
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}