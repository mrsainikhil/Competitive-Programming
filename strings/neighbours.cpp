#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin>>N>>M;
    vector<vector<char>> vec( N+2 ,vector<char>(M+2));
    for(int i = 0; i < N+2; i++){
        for(int j = 0; j < M+2; j++){
            if(i == 0 || j == 0 || i > N || j > M){
                vec[i][j] = 'x';
            }else
            cin>>vec[i][j];
        }
    }
    int x, y;
    cin>>x>>y;
    if(vec[x-1][y] =='x' &&vec[x-1][y-1] =='x'&&vec[x-1][y+1] =='x'&&vec[x][y-1] =='x'&&vec[x][y+1] =='x'&&vec[x+1][y] =='x'&&vec[x+1][y+1] =='x'&&vec[x+1][y-1] =='x'){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}