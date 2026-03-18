#include<bits/stdc++.h>

using namespace std;

vector<int> reverse(vector<int> vec){
	int left = 0;
	int right = vec.size() - 1;
	while(left < right){
		swap(vec[left],vec[right]);
		left++;
		right--;
	}
	return vec;
}
int main() {
	int N, M;
	cin>>N >> M;
	vector<vector<int>> vec(N,vector<int> (M));
	for(int i = 0; i < N * M; i++){
		cin>>vec[i/M][i%M];
	}
	for(int i = 0; i < N; i++)
		vec[i] = reverse(vec[i]);
	for(int i = 0; i < N * M; i++) {
		cout<<vec[i / M][i % M]<<" ";
		if(i % M == M -1)
			cout<<endl;
	}
	return 0;
}