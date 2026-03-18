#include<bits/stdc++.h>

using namespace std;

int main(){
	int s1, s2;
	cin>>s1>>s2;
	vector<int> vec1(s1);
	vector<int> vec2(s2);
	for(int i = 0; i < s1; i++)
		cin>>vec1[i];
	for(int i = 0; i < s2; i++)
		cin>>vec2[i];
	int i  = 0;
	int j = 0;
	while(i < s1 && j < s2){
		for(;i < s1 && vec1[i] != vec2[j];i++){
		}
		i++;
		j++;
	}
	if(j < s2){
		cout<<"NO";
	}else{
		cout<<"YES";
	}
	return 0;
}