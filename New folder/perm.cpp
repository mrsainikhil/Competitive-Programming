#include<bits/stdc++.h>

using namespace std;

int main() {
	int size;
	cin>>size;
	map<int,int> mpp;
	for(int i = 0; i < size; i++){
		int temp;
		cin>>temp;
		mpp[temp]++;
	}
	for(int i = 0; i < size; i++){
		int temp;
		cin>>temp;
		mpp[temp]--;
	}
	for(auto it: mpp){
		if(it.second != 0){
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;
}