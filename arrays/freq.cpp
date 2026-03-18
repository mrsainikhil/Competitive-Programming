#include<bits/stdc++.h>

using namespace std;

int main() {
	int N, M;
	cin>>N>>M;
	map<int,int> mpp;
	vector<int> vec(N);
	for(int i = 0; i < N; i++){
		cin>>vec[i];
		mpp[vec[i]]++;
	}
	for(int i = 1; i <= M; i++)
		cout<<mpp[i]<<endl;
	return 0;
}