#include<bits/stdc++.h>

using namespace std;

int main() {
	int sizeOfVector;
	cin>>sizeOfVector;
	int MinInt = INT_MAX;
	int MaxInt = INT_MIN;
	int MaxIntIdx = 0;
	int MinIntIdx = 0;
	vector<int> vec;
	for (int i = 0; i < sizeOfVector; i++) {
		int temp_var;
		cin>>temp_var;
		if(temp_var > MaxInt){
			MaxInt = temp_var;
			MaxIntIdx = i;
		}
		if(temp_var < MinInt){
			MinInt = temp_var;
			MinIntIdx = i;
		}
		vec.push_back(temp_var);
	}
	swap(vec[MinIntIdx], vec[MaxIntIdx]);
	for(int i = 0; i < sizeOfVector; i++) {
		cout<<vec[i]<<" ";
	}
	return 0;
}