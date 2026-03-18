#include<bits/stdc++.h>

using namespace std;

static vector<vector<int>> vec(6,vector<int>(6));

int hour_glass(int row, int col){
	int sum = 0;
	for(int i = row; i < row + 3; i++){
		for(int j = col; j < col + 3; j++){
			if(i == row + 1){
				sum += vec[i][j+1];
				break;
			}else{
				sum += vec[i][j];
			}
		}
	}
	return sum;
}

int main() {
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cin>>vec[i][j];
		}
	}
	int ans = INT_MIN;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			ans = max(ans, hour_glass(i, j));
		}
	}
	cout<<ans;
	return 0;
}