#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
			int j = 0;
		for (int i = 0; i < n; i++) {
			if (A[i] != 0) {
			swap(A[j], A[i]); 
			j++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << A[i] << " "; 
	}
	cout<<endl;
	}

	return 0;
}