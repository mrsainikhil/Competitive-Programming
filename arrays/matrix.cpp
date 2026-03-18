#include<bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin>>N;
	vector<vector<int>> vec(N,vector<int>(N));
	int primary_diagonal = 0;
	int secondary_diagonal = 0;
	for(int i = 0; i < N*N; i++){
		int row = i / N;
		int col = i % N;
		cin>>vec[row][col];
		if(row == col)
			primary_diagonal += vec[row][col];
		if(row + col == N-1)
			secondary_diagonal += vec[row][col];
	}
	int ans = primary_diagonal - secondary_diagonal;
	cout<<abs(ans);
	return 0;
}