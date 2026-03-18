#include<bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<vector<int>> vec(n,vector<int>(m));
	for(int i = 0; i < n*m; i++){
		cin>>vec[i/m][i%m];
	}
	int key;
	cin>>key;
	int flag = 0;
	for(int i = 0; i < n*m; i++){
		if(vec[i/m][i%m] == key){
			flag = 1;
			break;
		}
	if(flag)
		cout<<"will not take number";
	else
		cout<<"will take number";
	return 0;
}