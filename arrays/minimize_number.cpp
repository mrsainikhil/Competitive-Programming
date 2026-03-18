#include<bits/stdc++.h>

using namespace std;

int main() {
	int size ;
	cin>>size;
	vector<int> vec;
	for(int i = 0; i < size; i++){
		int temp;
		cin>>temp;
		vec.push_back(temp);
	}
	int count = 0; 
	int flag = 1;
	while(flag){
		for(int i = 0; i < size; i++){
			if(vec[i] % 2 == 0){
				vec[i] /= 2;
			}else{
				flag = 0;
				break;
			}
		}
		if(flag){
			count++;
		}	
	cout<<count;
	}
}