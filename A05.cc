#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,K;
	cin >>N>>K;

	int ans=0;

	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			if(K-i-j<=N && K>i+j){
				ans++;
			}
		}
	}

	cout <<ans<<endl;
}