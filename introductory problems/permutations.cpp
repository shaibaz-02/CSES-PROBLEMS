#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;cin>>n;
	if(n<=3 && n!=1){
		cout<<"NO SOLUTION";
	}else{
	if(n==4){
		cout<<"3 1 4 2";
	}else{
		for(int i=1;i<=n;i++){
			if(i%2!=0){
				cout<<i<<" ";
			}
		}
		for(int i=2;i<=n;i++){
			if(i%2==0){
				cout<<i<<" ";
			}
		}
	}
	}
	return 0;
}