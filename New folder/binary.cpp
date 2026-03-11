#include<bits/stdc++.h>

using namespace std;

int main() {
	 vector<int> a(20);
	 int n;
	 cin>>n;
        int i;
        for (i = 0; n > 0; i++) {
            a[i] = n % 2;
            n = n / 2;
        }
        for (i = i - 1; i >= 0; i--) {
            cout << a[i];
        }
	return 0;
}