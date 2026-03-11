#include <bits/stdc++.h>

using namespace std;

int main() {
	int queries;
	cin>>queries;
	while(queries--){
		int size;
		cin>>size;
		vector<int> vec(size);
		for(int i = 0; i < size; i++)
			cin>>vec[i];
		int count = 0;
		for(int i = 1; i <= size; i++){
			for(int j = 0; i + j <= size; j++){
				int flag = 1;
					if(vec[k] > vec[k+1]){
				for(int k = j; k < i + j-1; k++){
						flag = 0;
						break;
					}
				}
				if(flag){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}